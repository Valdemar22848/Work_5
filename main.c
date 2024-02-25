#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");

	int x, y;

	printf("¬ведите целое число x: ");
	scanf("%d", &x);

	y = 5 * x + 20;

	printf("«начение выражени€ y = 5 * x + 20 при x = %d равно %d\n", x, y);

	return 0;
}



