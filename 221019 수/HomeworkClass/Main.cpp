#include "PractClass1.h"

void main() {
	Circle circle;
	float r;
	cout << "1��. ���� �������� �Է��ϼ���\n :";
	cin >> r;
	circle.setR(r);
	circle.printCircle();

	cout << endl << endl;

	//�Ҹ��� ���¹� �� �𸣰ھ��..
	�ؾ �ؾ;
	char �ӱ�[50]; char ����[50];
	int ����;
	cout << "2��. �ֹ��ϰ���� �ؾ�� ���� �����ּ���\n���� :";
	cin >> ����;
	cout << "�ӱ� : ";
		cin >> �ӱ�;
		cout << "���� : ";
		cin >> ����;
		�ؾ.set�ؾ(�ӱ�, ����, ����);
		�ؾ.print�ؾ();

}