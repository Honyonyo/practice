#pragma once

#include <iostream>
#include <time.h>
using namespace std;

//Ŭ���� �����
/*����� "���"���� ���⿡�� �� �� ����ִ´�
* ��� Ʋ�� ����ְ� ��ü���� ������ cpp���� �����.
*/
class GameBingo
{private:
	int board[5][5];	//������
	int bingoCount = 0;	//���� �� ������ ���°�
	int turn = 0;
	int inputNumber;
	int indexI, indexJ;
	int tmp;


public:
	//5*5������ �����
	void boardSetting();	
	//������ ���־�� �Ѹ���
	void boardSpread();

	//�Է¹��� ���� ��ġ�� �����ϰ� @�� ĥ�ϰ� ���ڰ��� 25�� �ٲٴ� ���
	void openNumber(int num);		
	//����ī��Ʈ������ �򰥷��� m_�ٿ��µ�...
	void m_bingoCounter();	

};

