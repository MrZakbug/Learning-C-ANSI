#include <stdio.h>

main()
{
	int a, b;
	puts("Podaj liczbe a:");
	scanf("%d", &a);
	puts("Podaj liczbe b:");
	scanf("%d", &b);

	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		if (a < b)
		{
			b = b - a;
		}
	}
	printf("Najwiekszy wspolny dzielnik tych liczb to %d", a);

	return 0;
	

}