#include <stdio.h>

main()
{
	int a, b;
	puts("Podaj liczbe naturalna:");
	scanf("%d", &a);
	if (a % 2 != 0)
	{
		for (b = 3; b <= a; b+=2)
		{
			if (a % b == 0)
			{
				printf("Liczba jest podzielna przez %d", b);
				return 0;
			}
		
		}
		printf("Jest to liczba pierwsza");

	}

	else
	printf("Nie jest to liczba pierwsza");


	return 0;
}