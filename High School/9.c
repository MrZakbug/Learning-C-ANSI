#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	int n, i, t, d;
	int tablica[120];
	tablica[0] = 0;
	tablica[1] = 0;
	for (i = 2; i < 120; i++)
	{	
		tablica[i]=1;
	}

	printf("Podaj liczbe: "); 
	scanf("%d", &n);

	for (i = 2; i*i <= n; i++){
		for (t = 2 * i; t < 120; t += i){
			tablica[t] = 0;
		}
	}

	if (tablica[n]==1)
		printf("Liczba %d jest liczba pierwsza", n);
	
	else{
		for (i = n; i>1; i -= 1){
			if (n%i == 0)
				d = i;
		}
		
		printf("Liczba %d jest podzielna przez %d", n, d);
	}
	return 0;
}
