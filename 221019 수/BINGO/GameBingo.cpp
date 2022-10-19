#include "GameBingo.h"
//클래스 구현부
/*멤버 함수를 여기에서 정의(구현)해준다?
*/

GameBingo::GameBingo() {};

void GameBingo::boardSetting()
{
	srand(time(NULL));
	//0~24까지의 숫자 넣음
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = (i * 5) + j;
		}
	}

	//셔플
	for (int i = 0; i < 3200; i++)	{
		int indexA = rand()%25;
		int indexB = rand() % 25;
		int indexC = rand() % 25;
		int indexD = rand() % 25;
		tmp = board[indexA][indexB];
		board[indexA][indexB] = board[indexC][indexD];
		board[indexC][indexD] = tmp;
		}
}

void GameBingo::boardSpread()
{

}

void GameBingo::m_bingoCounter() {
	//셀렉한 칸의 숫자를 25로 바꿀것이기 때문에 줄의 합이 125가 되면 1빙고인것
	//대각선 
	tmp = 0;
	for (int i = 0; i < 5; i++) {
		tmp += board[i][i];
	}
	if (tmp == 125) bingoCount++;
	tmp = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j >= 0; j--) {
			tmp += board[i][j];
		}
	}
	if (tmp == 125) bingoCount++;
		//직선 가로
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				tmp += board[i][j];
			}
			if (tmp == (125)) bingoCount++;
		}
	//직선 세로
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tmp += board[j][i];
		}
		if (tmp == (125)) bingoCount++;
	}
}
