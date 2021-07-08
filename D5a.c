#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("chcp 1251");
    system("cls");
    float x, y, z;
    printf("¬введите данные дл€ оси ординат и абсцисса дл€ уравнени€ (x и y)z= x3 Ц 2.5xy+1.87x2+1\n");
    scanf_s("%f%f", &x, &y);
    z = (x * x * x) - (2.5 * x * y) + (1.87 * x * x) + 1;
    printf("%.2f", z);
    }