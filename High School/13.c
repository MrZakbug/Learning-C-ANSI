#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rozwiniecie(int a)
{
	int s;
	s = 0;

	while (a > 0)
	{
		s += a % 10;
		a /= 10;
	}
	return s;
	
}

int main()
{
	int n;
	kolejna:
	printf("Aby przerwac podawanie liczb wpisz 0 albo podaj kolejna liczbe w ciagu: ");
	scanf("%d", &n);
	
	if (n == 0){
		return 0;
	}
	else {
		printf("Suma rozwiniecia dziesietnego liczby %d wynosi: %d\n\n", n, rozwiniecie(n));
		goto kolejna;
	}

	return 0;
}