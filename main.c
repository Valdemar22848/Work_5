#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");

	int x, y;

	printf("������� ����� ����� x: ");
	scanf("%d", &x);

	y = 5 * x + 20;

	printf("�������� ��������� y = 5 * x + 20 ��� x = %d ����� %d\n", x, y);

	return 0;
}



