#include <stdio.h>
#include <conio.h>

void main()
{
	system("chcp 1251");
	int dt1, dt2;
	float pr, bill;
	printf("������� ���� �� ������������� � ������ � ���������:");
	scanf_s("%f", &pr);
	printf("������� ��������� �������� � ������ ������(���*�):");
	scanf_s("%d", &dt1);
	printf("������� ��������� �������� � ����� ������(���*�):");
	scanf_s("%d", &dt2);
	bill = pr * (dt2 - dt1);
	printf("���� �� ����� ����������� ��������������: %.2f", bill);

}