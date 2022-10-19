#include "PractClass1.h"

void Circle::calculation() {
	this->d = 2 * this->r;
	area = 3.14 * r * r;
	round = 3.14 * d;
}
void Circle::printCircle(){
	Circle::calculation();
		printf_s("ÀÔ·ÂÇÏ½Å ¿øÀÇ ¹ÝÁö¸§Àº %.3fÀÔ´Ï´Ù.\n", this->r);
		printf_s("ÀÌ ¿øÀÇ Áö¸§Àº % .3f,\n¸éÀûÀº %.3f,\nµÑ·¹´Â %.3fÀÔ´Ï´Ù.\n", this->d, this->area, this->round);
	}

void ºØ¾î»§::printºØ¾î»§()
{
	printf_s("¼±ÅÃÇÏ½Å ºØ¾î»§Àº %s¹ÝÁ×À¸·Î ¸¸µé¾îÁø %s¸À ºØ¾î»§\nÃÑ %d°³ÀÔ´Ï´Ù.", this->¹ÝÁ×, ¾Ó±Ý, °¹¼ö);
}