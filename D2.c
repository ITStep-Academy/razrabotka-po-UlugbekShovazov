#include <stdio.h>
#include <conio.h>

void main()
{
	system("chcp 1251");
	int dt1, dt2;
	float pr, bill;
	printf("¬ведите цену за электричество в рубл€х с копейками:");
	scanf_s("%f", &pr);
	printf("¬ведите показание счетчика в начале мес€ца(к¬т*ч):");
	scanf_s("%d", &dt1);
	printf("¬ведите показание счетчика в конце мес€ца(к¬т*ч):");
	scanf_s("%d", &dt2);
	bill = pr * (dt2 - dt1);
	printf("÷ена за мес€ц пользовани€ электричеством: %.2f", bill);

}