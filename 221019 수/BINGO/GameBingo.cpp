#include "GameBingo.h"
//Ŭ���� ������
/*��� �Լ��� ���⿡�� ����(����)���ش�?
*/

GameBingo::GameBingo() {};

void GameBingo::boardSetting()
{
	srand(time(NULL));
	//0~24������ ���� ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = (i * 5) + j;
		}
	}

	//����
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
	//������ ĭ�� ���ڸ� 25�� �ٲܰ��̱� ������ ���� ���� 125�� �Ǹ� 1�����ΰ�
	//�밢�� 
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
		//���� ����
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				tmp += board[i][j];
			}
			if (tmp == (125)) bingoCount++;
		}
	//���� ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tmp += board[j][i];
		}
		if (tmp == (125)) bingoCount++;
	}
}
