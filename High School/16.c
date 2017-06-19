#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char linia[1000]; /* linia z pliku*/
	char wyraz[100]; /* jeden wyraz*/
	char file_destination[100];
	int n, i;
missing_file:
	printf("Podaj sciezke dostepu do pliku (np. C:\\folder\\folder\\plik):\n");
	gets(file_destination);

	FILE *file = fopen(("%s", file_destination), "r");
	if (file == NULL) {
		printf("UWAGA! Nie udalo sie otowrzyc pliku (sprawdz sciezke dostepu)\n\n");
		goto missing_file;
	}
	fscanf(file, "%d", &n); /* pobieramy numer kolumny do wyswietlenia*/
	fgets(linia, (int)sizeof(linia), file);  /* pobieramy reszte lini tesktu, zeby przejsc do nastpenej*/

	while (!feof(file)) /*dopoki nie dojdziemy do konca pliku*/
	{
		fgets(linia, (int)sizeof(linia), file);  /* pobieramy linie tekstu*/
		for (i = 0; i < n; i++) /* probujemy sie dostac do wlasciwej kolumny*/
		{
			sscanf(linia, "%s", wyraz); /* pobieramy wyraz*/
			strcpy(linia, linia + strlen(wyraz) + 1); /* modyfikujemy linie poprzez skopiowanie tej samej lini przesunietej o dlugosc wyrazu*/
		}
		printf("%s\n", wyraz); /* wyswietlenie wyrazu*/
	}

	fclose(file); /* zamkniecie pliku*/
}