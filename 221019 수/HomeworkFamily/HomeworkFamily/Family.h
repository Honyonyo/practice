#pragma once
#include <iostream>

using namespace std;

//Family클래스 
class C_Family
{
private :
//멤버변수를 지정해줄거야
	//name 10칸짜리 동적 할당 배열 시작 위치에 접근
	char* name = new char;
	char* job = new char;
	short age;
	char* position = new char;

public :
//변수에 접근 가능한 메소드를 지정해줄거야
	void information(char* name, char* position, char* job, short age) {
		this->name = name;
		this->position = position;
		this->job = job;
		this->age = age;

		printf("%s의 이름은 %s입니다.\n우리 %s는 %s이고, %d살입니다.", position, name, position,job, age);
	}
	C_Family();
};

