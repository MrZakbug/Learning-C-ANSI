#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int liczba_pierwsza(n)
{
	int i, j, tablica[500];
	tablica[0] = 0;
	tablica[1] = 0;

	for (i = 2; i < 500; i += 1){
		tablica[i] = 1;
	}
	for (i = 2; i < 500; i += 1){
		if (tablica[i] != 0){		
			for (j = 2 * i; j < 500; j += i){
				tablica[j] = 0;
			}
		}
	}

	return tablica[n];

}

int main()
{
	int n;
	int i;

	zla_liczba:
	printf("Podaj liczbe parzysta z zakresu [0:500]: ");
	scanf("%d", &n);

	if (n<0 || n>500 || n % 2 != 0){
		printf("Blad. Podana liczba jest spoza zakresu, badz nieparzysta.\n\n");
		goto zla_liczba;
	}

	for (i = 3; i < n - 3; i += 2){

		if ((liczba_pierwsza(i) == 1) && (liczba_pierwsza(n - i) == 1)){
			printf("Liczbe %d mozna otrzymac przez dodanie %d i %d.", n, i, n - i);
			break;
		}
	}
}