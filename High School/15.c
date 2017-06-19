#include <stdlib.h>
#include <stdio.h>

int main()
{
	double suma = 0.0; 
	int ile_liczb = 0; 
	int liczba; //zmienna do ktorej bedziemy wczytywac kolejne liczby z pliku

	FILE* plik;
	char nazwa_pliku[200];

	//pytanie o nazwe pliku
	printf("Podaj nazwe pliku: ");
	scanf("%s", nazwa_pliku); 

	plik = fopen(nazwa_pliku, "r");

	while(feof(plik) == 0) // jesli nie koniec pliku feof=0
	{
		fscanf(plik, "%d", &liczba);
		suma += liczba;
		ile_liczb +=1; // dodanie liczby
	}

	fclose(plik);
	if(ile_liczb == 0) // czy byly jakie liczby
		printf("Nie bylo liczb\n");
	else
		printf("Srednia liczb wynosi: %.2f\n", suma/ile_liczb);

	system("pause");
	return 0;
}
