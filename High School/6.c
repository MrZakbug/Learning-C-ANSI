#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int w, ww, www;
	puts("Jak wysoka ma byc choinka?");
	scanf("%d", &w);
	www = ww = w;

	for (int a = 1; a <= w; a++)
	{
		for (int b = 1; b <= ww; b++)
			printf(" ");

		ww--;

		for (int c = 1; c <= 2 * a - 1; c++)
			printf("*");

		printf("\n");

	}

	for (int p = 1; p <= 2; p++)
	{
		for (int b = 1; b <= www; b++)
			printf(" ");

		printf("|\n");

	}

	return 0;
}