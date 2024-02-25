#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");

	int x, y;

	printf("Ââåäèòå öåëîå ÷èñëî x: ");
	scanf("%d", &x);

	y = 5 * x + 20;
	y *= 2;

	printf("Çíà÷åíèå âûðàæåíèÿ y = 5 * x + 20 ïðè x = %d ðàâíî %d\n", x, y);

	return 0;
}



