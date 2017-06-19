#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int e, elementy[10], c, d, t, *w, w1, x;
	w1 = 0;
	zla_liczba:
	printf("Wprowadz liczbe elementow do posortowania <1...10>: ");
	scanf("%d", &e);
	if (10>=e<1)
	{
		printf("Zla liczba, sprobuje ponownie\n");
		goto zla_liczba;
	}

	for (c = 0; c < e; c++)
	{
		printf("Wprowadz liczbe [%d]", c+1);
		scanf("%d", &elementy[c]);
	}

	for (c = 1; c <= e - 1; c++) 
	{
		d = c;

		while (d > 0 && elementy[d] < elementy[d - 1]) {
			t = elementy[d];
			elementy[d] = elementy[d - 1];
			elementy[d - 1] = t;

			d--;
		}
	}


	printf("Wyprowadzanie posortowanych elementow:\n");

	for (w = &elementy[0]; w1 < e; w1++)
	{
		x = *w;
		printf("%d\n", x);
		*(w++);
	}

	return 0;
}