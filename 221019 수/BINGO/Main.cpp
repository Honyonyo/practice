#include "GameBingo.cpp"

void main() {
	GameBingo bingo;
	//ù ������ ����
	bingo.boardSetting();
	bingo.boardSpread();
	
	//1����Ŭ
	do {
		bingo.inputNumber();
		bingo.boardSpread();
		bingo.m_bingoCounter();
	} while (bingo.isFiveBingo());
}