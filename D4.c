#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("chcp 1251");
    system("cls");
    float X, A, Y;
    printf("������� ��� ����� � ��������� � �� � ��������� ����� �����: \n");
    scanf_s("%f%f", &X, &A);
    printf("�� ������ ��������� �������� ���������: %.2f ������\n", A / X);
    printf("������ ��������� ������ �� ������ ������?(Y):\n");
    scanf_s("%f", &Y);
    printf("���� ������� ��������� ��� � %.2f ������", (A / X) * Y);

}