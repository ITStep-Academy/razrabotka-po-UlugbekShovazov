#include <stdio.h>
#include <conio.h>

void main()
{
	system("chcp 1251");
	system("cls");
	double f, c = 0;
	printf("������� ����������� � �����������: ");
	scanf_s("%lf", &f);
	c = (f - 32) * 100 / 180;
	printf("��� � ��������: %.1lf", c);
}