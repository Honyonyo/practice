#pragma once
#include <iostream>

using namespace std;

//FamilyŬ���� 
class C_Family
{
private:
	//��������� �������ٰž�
		//name 10ĭ¥�� ���� �Ҵ� �迭 ���� ��ġ�� ����
	char* name = new char;
	char* job = new char;
	int age;
	char* position = new char;


public:

	void information(char*, char*, int age) {
	}
	void info() {
		printf("�츮 ");
	}
};