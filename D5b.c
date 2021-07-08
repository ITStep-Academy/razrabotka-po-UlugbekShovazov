#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("chcp 1251");
    system("cls");
    float x, a, b;
    printf("¬введите данные a и b дл€ уравнени€  x= 3.56a+b3-5.8b2+3.8a-1.5\n");
    scanf_s("%f%f", &a, &b);
    x = 3.56 * a + (b * b * b) - (5.8 * b * b) + 3.8 * a  - 1.5;
    printf("%.2f", x);
    }