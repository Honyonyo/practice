#pragma once
#include <iostream>

using namespace std;

//FamilyŬ���� 
class C_Family
{
private :
//��������� �������ٰž�
	//name 10ĭ¥�� ���� �Ҵ� �迭 ���� ��ġ�� ����
	char* name = new char;
	char* job = new char;
	short age;
	char* position = new char;

public :
//������ ���� ������ �޼ҵ带 �������ٰž�
	void information(char* name, char* position, char* job, short age) {
		this->name = name;
		this->position = position;
		this->job = job;
		this->age = age;

		printf("%s�� �̸��� %s�Դϴ�.\n�츮 %s�� %s�̰�, %d���Դϴ�.", position, name, position,job, age);
	}
	C_Family();
};

