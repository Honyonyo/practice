#include "PractClass1.h"

void main() {
	Circle circle;
	float r;
	cout << "1¹ø. ¿øÀÇ ¹ÝÁö¸§À» ÀÔ·ÂÇÏ¼¼¿ä\n :";
	cin >> r;
	circle.setR(r);
	circle.printCircle();

	cout << endl << endl;

	//¼Ò¸êÀÚ ¾²´Â¹ý Àß ¸ð¸£°Ú¾î¿ä..
	ºØ¾î»§ ºØ¾î»§;
	char ¾Ó±Ý[50]; char ¹ÝÁ×[50];
	int °¹¼ö;
	cout << "2¹ø. ÁÖ¹®ÇÏ°í½ÍÀº ºØ¾î»§¿¡ ´ëÇØ ¸»ÇØÁÖ¼¼¿ä\n¹ÝÁ× :";
	cin >> ¹ÝÁ×;
	cout << "¾Ó±Ý : ";
		cin >> ¾Ó±Ý;
		cout << "°¹¼ö : ";
		cin >> °¹¼ö;
		ºØ¾î»§.setºØ¾î»§(¾Ó±Ý, ¹ÝÁ×, °¹¼ö);
		ºØ¾î»§.printºØ¾î»§();

}