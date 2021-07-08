#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("chcp 1251");
    system("cls");
    int x, y, z;
    x = 2;
    y = 5;
    x = x + 1;
    y = y - 10;
    z = 8;
    z = x + y;
    x = y + z;
    y = x + y + z;
    printf("%d%d%d", x, y, z);
 }
