#pragma once

#include <iostream>
#include <time.h>
using namespace std;

//클래스 선언부
/*사용할 "요소"들을 여기에다 싹 다 집어넣는다
* 모양 틀만 잡아주고 구체적인 사항은 cpp에서 만든다.
*/
class GameBingo
{private:
	int board[5][5];	//빙고판
	int bingoCount = 0;	//빙고 몇 줄인지 세는것
	int turn = 0;
	int inputNumber;
	int indexI, indexJ;
	int tmp;


public:
	//5*5빙고판 만들기
	void boardSetting();	
	//빙고판 비주얼로 뿌리기
	void boardSpread();

	//입력받은 숫자 위치를 오픈하고 @로 칠하고 숫자값을 25로 바꾸는 기능
	void openNumber(int num);		
	//빙고카운트변수랑 헷갈려서 m_붙였는데...
	void m_bingoCounter();	

};

