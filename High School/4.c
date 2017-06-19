#include <stdio.h>
main()
{
	int a, s;
	s = 0;
	puts("Podaj liczbe naturalna:");
	scanf("%d", &a);
	while (a > 0)
	{
		s += a % 10;
		a /= 10;
	}
	printf("Suma rozwiniecia dziesietnego tej liczby to:%d", s);

	return 0;



}