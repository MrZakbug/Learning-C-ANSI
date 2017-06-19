#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sw;	
	int wwolny;	 
	int tablica[20]; 
	int x;	 
	int wynik;	 
	int i; 
	printf("Podaj stopien wielomianu: "); 
	scanf("%d", &sw);
	printf("Podaj wyraz wolny: ");
	scanf("%d", &wwolny);

	for (i = 0; i < sw; i++)
	{
		printf("Podaj wspolczynnik przy x^");
		printf("%d: ", i + 1);
		scanf("%d", &tablica[i]);
		//printf("\n");
	}
	printf("Podaj wartosc x: ");
	scanf("%d", &x);
	wynik = tablica[i];

	for (i = 1; i < sw; i++)
	{
		wynik = wynik * x + tablica[i];
	}
	wynik = wynik + wwolny;

	printf("Wartosc wielomianu wynosi ");
	printf("%d", wynik);
	return 0;
}