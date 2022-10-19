#include "GameBingo.h"
//클래스 구현부
/*멤버 함수를 여기에서 정의(구현)해준다?
*/

/*GameBingo::GameBingo() {
	srand(time(NULL));
	//0~24까지의 숫자 넣음
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = (i * 5) + j;
			callNum[(i * 5) + j] = 0;
		}
	}

	//셔플
	for (int i = 0; i < 3200; i++) {
		int indexA = rand() % 25;
		int indexB = rand() % 25;
		int indexC = rand() % 25;
		int indexD = rand() % 25;
		tmp = board[indexA][indexB];
		board[indexA][indexB] = board[indexC][indexD];
		board[indexC][indexD] = tmp;
	}
	tmp = NULL;
};
*/
void GameBingo::boardSetting()
{
	srand(time(NULL));
	//0~24까지의 숫자 넣음
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = (i * 5) + j;
			callNum[(i * 5) + j] = 0;
		}
	}

	//셔플
	for (int i = 0; i < 3200; i++)	{
		int indexA = rand() % 25;
		int indexB = rand() % 25;
		int indexC = rand() % 25;
		int indexD = rand() % 25;
		tmp = board[indexA][indexB];
		board[indexA][indexB] = board[indexC][indexD];
		board[indexC][indexD] = tmp;
		}
}

//callNum = 0 선택 안된것, callNum = 1 선택 된것
void GameBingo::boardSpread()
{
	system("cls");	//뿌리기 전에 미리 화면 청소
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			switch (callNum[(i*5)+j]) {
			case 0: printf("〔 %2c 〕", '@');
				break;
			case 1:printf("〔 %2c 〕", '?');
				break;
			default: printf("〔 %2s 〕", "er");		//error
			}
		}//for j 끝
		cout << endl;	//5칸 채우면 한줄 내리기
	}//for i 끝
	cout << endl;

	Sleep(1000);
}//boardSpread끝

//a=유저가 방금 선택한 숫자 오픈
void GameBingo::boardSpread(int a)
{
	system("cls");//뿌리기 전에 화면 청소
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			switch (callNum[(i * 5) + j]) {
			case 0: printf("〔 %2d 〕", board[i][j]);
				break;
			case 1:printf("〔 %2c 〕", '?');
				break;
			default: printf("〔 %2s 〕", "er");		//error
			}
		}//for j 끝
		cout << endl;	//5칸 채우면 한줄 내리기
	}//for i 끝
	cout << endl;

	Sleep(1000);
}//boardSpread끝


void GameBingo::findNumber(int num)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (board[i][j] == num) {
				indexI = i;	indexJ = j;
				board[i][j] = token;
			}//if
		} //for j
	}//for i

	turn++;

	GameBingo::boardSpread(turn);
}

void GameBingo::inputNumber()
{
	cout << "숫자를 입력하세요~" << endl;
	while (0) {
		cin >> inputNum;

		//inputNum의 유효성을 검사할거야!
		if (inputNum > 24 || inputNum < 0) {
			cout << "0부터 24까지의 숫자만 입력 가능합니다." << endl;
			continue;
		}
		for (int i = 0; i <= turn; i++) {
			if (inputNum == storage[i]) {
				cout << "중복된 숫자입니다. 다시 입력하세요." << endl;
				continue;
			}
		}//for 끝

		storage[turn] = inputNum;
	}
	GameBingo::findNumber(inputNum);
}

void GameBingo::m_bingoCounter()
{
	//셀렉한 칸의 숫자를 25로 바꾸기 때문에 줄의 합이 125가 되면 1빙고인것
	//대각선 
	tmp = 0;
	for (int i = 0; i < 5; i++) {
		tmp += board[i][i];
	}
	plusBingoCount();
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j >= 0; j--) {
			tmp += board[i][j];
		}
	}
	plusBingoCount();
	//직선 가로
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tmp += board[i][j];
		}
		plusBingoCount();
	}
	//직선 세로
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tmp += board[j][i];
		}
		plusBingoCount();
	}

}

bool GameBingo::isFiveBingo()
{
	if (bingoCount < 5) return true;

	else{
		cout << "GAME CLEAR!" << endl;
		Sleep(500);
		cout << turn + 1 << "번째 선택만에 5빙고를 달성했어요!" << endl;
		Sleep(500);
		cout << "축하드립니다~~\n" << endl;
		Sleep(1500);

		cout << "(새로운 게임을 원하신다면 콘솔을 다시 시작해주세요.)" << endl;
		return false;
	}
}

