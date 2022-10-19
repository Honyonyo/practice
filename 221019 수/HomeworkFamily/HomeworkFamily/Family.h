#pragma once
#include <iostream>

using namespace std;

//Family클래스 
class C_Family
{
private:
	//멤버변수를 지정해줄거야
		//name 10칸짜리 동적 할당 배열 시작 위치에 접근
	char* name = new char;
	char* job = new char;
	int age;
	char* position = new char;


public:

	void information(char*, char*, int age) {
	}
	void info() {
		printf("우리 ");
	}
};