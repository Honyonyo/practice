#include "PractClass1.h"

void Circle::calculation() {
	this->d = 2 * this->r;
	area = 3.14 * r * r;
	round = 3.14 * d;
}
void Circle::printCircle(){
	Circle::calculation();
		printf_s("�Է��Ͻ� ���� �������� %.3f�Դϴ�.\n", this->r);
		printf_s("�� ���� ������ % .3f,\n������ %.3f,\n�ѷ��� %.3f�Դϴ�.\n", this->d, this->area, this->round);
	}

void �ؾ::print�ؾ()
{
	printf_s("�����Ͻ� �ؾ�� %s�������� ������� %s�� �ؾ\n�� %d���Դϴ�.", this->����, �ӱ�, ����);
}