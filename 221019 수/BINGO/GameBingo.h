#pragma once

#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

//Ŭ���� �����
/*����� "���"���� ���⿡�� �� �� ����ִ´�
* ��� Ʋ�� ����ְ� ��ü���� ������ cpp���� �����.
*/
class GameBingo
{private:
	int board[5][5];	//������
	bool callNum[25];	//0 �Ϲݻ��� 1 �����Ѱ�
	int bingoCount = 0;	//���� �� ������ ���°�

	int turn = 0;

	int* storage = new int;
	int inputNum;
	int indexI, indexJ;

	int tmp=NULL;
	int token = 25;

	//GameBingo();

public:
	//5*5������ �����
	void boardSetting();	
	//������ ȭ�鿡 �Ѹ���
	void boardSpread();
	//������ ȭ�鿡 �Ѹ��� - ������ ���� ���̱� �����ε�
	void boardSpread(int a);

		//�Է¹��� ���� ��ġ�� ã�� ���ڰ��� 25�� �ٲٴ� ���
	void findNumber(int num);		

	//���� �Է±�
	void inputNumber();

	void plusBingoCount() {
		if (tmp == (token * 5))	bingoCount++;
		tmp = NULL;
	}

	//����ī��Ʈ������ �򰥷��� m_�ٿ��µ�...
	void m_bingoCounter(); 

	bool isFiveBingo();
};

