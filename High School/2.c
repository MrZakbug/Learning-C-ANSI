#include <stdio.h>
main()
{
	double a, b, c, wynik;
	puts("Podaj liczbe a:");
	scanf("%lg", &a);
	puts("Podaj liczbe b:");
	scanf("%lg", &b);
	puts("Podaj liczbe c:");
	scanf("%lg", &c);
	
	if (c > 0)
	{
		wynik = a*a + b;
		printf("Wynik to:%lg", wynik);
	}
	else if (c < 0)
	{
		wynik = a - b*b;
		printf("Wynik to:%lg", wynik);
	}
	else
	{
		wynik = 1 / (a - b);
		if (a - b == 0);
		printf("Proba dzielenia przez 0");
		else
		printf("Wynik to:%lg", wynik);
		}
			
	}


	return 0;

}
