#include "GameBingo.cpp"

void main() {
	GameBingo bingo;
	//첫 빙고판 세팅
	bingo.boardSetting();
	bingo.boardSpread();
	
	//1사이클
	do {
		bingo.inputNumber();
		bingo.boardSpread();
		bingo.m_bingoCounter();
	} while (bingo.isFiveBingo());
}