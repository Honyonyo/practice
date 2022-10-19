#pragma once

#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

//클래스 선언부
/*사용할 "요소"들을 여기에다 싹 다 집어넣는다
* 모양 틀만 잡아주고 구체적인 사항은 cpp에서 만든다.
*/
class GameBingo
{private:
	int board[5][5];	//빙고판
	bool callNum[25];	//0 일반상태 1 선택한것
	int bingoCount = 0;	//빙고 몇 줄인지 세는것

	int turn = 0;

	int* storage = new int;
	int inputNum;
	int indexI, indexJ;

	int tmp=NULL;
	int token = 25;

	//GameBingo();

public:
	//5*5빙고판 만들기
	void boardSetting();	
	//빙고판 화면에 뿌리기
	void boardSpread();
	//빙고판 화면에 뿌리기 - 선택한 숫자 보이기 오버로드
	void boardSpread(int a);

		//입력받은 숫자 위치를 찾고 숫자값을 25로 바꾸는 기능
	void findNumber(int num);		

	//숫자 입력기
	void inputNumber();

	void plusBingoCount() {
		if (tmp == (token * 5))	bingoCount++;
		tmp = NULL;
	}

	//빙고카운트변수랑 헷갈려서 m_붙였는데...
	void m_bingoCounter(); 

	bool isFiveBingo();
};

