#include "GameBingo.h"
//Ŭ���� ������
/*��� �Լ��� ���⿡�� ����(����)���ش�?
*/

/*GameBingo::GameBingo() {
	srand(time(NULL));
	//0~24������ ���� ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = (i * 5) + j;
			callNum[(i * 5) + j] = 0;
		}
	}

	//����
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
	//0~24������ ���� ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = (i * 5) + j;
			callNum[(i * 5) + j] = 0;
		}
	}

	//����
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

//callNum = 0 ���� �ȵȰ�, callNum = 1 ���� �Ȱ�
void GameBingo::boardSpread()
{
	system("cls");	//�Ѹ��� ���� �̸� ȭ�� û��
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			switch (callNum[(i*5)+j]) {
			case 0: printf("�� %2c ��", '@');
				break;
			case 1:printf("�� %2c ��", '?');
				break;
			default: printf("�� %2s ��", "er");		//error
			}
		}//for j ��
		cout << endl;	//5ĭ ä��� ���� ������
	}//for i ��
	cout << endl;

	Sleep(1000);
}//boardSpread��

//a=������ ��� ������ ���� ����
void GameBingo::boardSpread(int a)
{
	system("cls");//�Ѹ��� ���� ȭ�� û��
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			switch (callNum[(i * 5) + j]) {
			case 0: printf("�� %2d ��", board[i][j]);
				break;
			case 1:printf("�� %2c ��", '?');
				break;
			default: printf("�� %2s ��", "er");		//error
			}
		}//for j ��
		cout << endl;	//5ĭ ä��� ���� ������
	}//for i ��
	cout << endl;

	Sleep(1000);
}//boardSpread��


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
	cout << "���ڸ� �Է��ϼ���~" << endl;
	while (0) {
		cin >> inputNum;

		//inputNum�� ��ȿ���� �˻��Ұž�!
		if (inputNum > 24 || inputNum < 0) {
			cout << "0���� 24������ ���ڸ� �Է� �����մϴ�." << endl;
			continue;
		}
		for (int i = 0; i <= turn; i++) {
			if (inputNum == storage[i]) {
				cout << "�ߺ��� �����Դϴ�. �ٽ� �Է��ϼ���." << endl;
				continue;
			}
		}//for ��

		storage[turn] = inputNum;
	}
	GameBingo::findNumber(inputNum);
}

void GameBingo::m_bingoCounter()
{
	//������ ĭ�� ���ڸ� 25�� �ٲٱ� ������ ���� ���� 125�� �Ǹ� 1�����ΰ�
	//�밢�� 
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
	//���� ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tmp += board[i][j];
		}
		plusBingoCount();
	}
	//���� ����
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
		cout << turn + 1 << "��° ���ø��� 5���� �޼��߾��!" << endl;
		Sleep(500);
		cout << "���ϵ帳�ϴ�~~\n" << endl;
		Sleep(1500);

		cout << "(���ο� ������ ���ϽŴٸ� �ܼ��� �ٽ� �������ּ���.)" << endl;
		return false;
	}
}

