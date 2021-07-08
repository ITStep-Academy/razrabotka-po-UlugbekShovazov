#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("chcp 1251");
    system("cls");
    float X, A, Y;
    printf("Введите вес мешка с конфетами в кг и стоимость этого мешка: \n");
    scanf_s("%f%f", &X, &A);
    printf("За каждый килограмм придется заплатить: %.2f рублей\n", A / X);
    printf("Солько килограмм конфет вы хотите купить?(Y):\n");
    scanf_s("%f", &Y);
    printf("Ваше покупка обойдется вам в %.2f рублей", (A / X) * Y);

}