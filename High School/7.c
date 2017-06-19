#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int m, macierz[10][10], w1, w2;
	w1 = w2 = 0;
	printf("Podaj stopien macierzy\n");
	scanf("%d", &m);

	for (int c = 0; c < m; c++)
	{
		for (int d = 0; d < m; d++)
		{
			printf("Podaj element [%d,%d]=", c + 1, d + 1);
			scanf("%d", &macierz[c][d]);

			if (c < d)
				w1 = w1 + macierz[c][d];

			else if (c > d)
				w2 = w2 + macierz[c][d];
		}
	}

	printf("Suma elementow powyzej glownej przekatnej (=%d) ", w1);

	if (w1 < w2)
		printf("nie ");

	printf("jest wieksza od sumy elementow ponizej glownej przekatnej(=%d)", w2);



	return 0;
}