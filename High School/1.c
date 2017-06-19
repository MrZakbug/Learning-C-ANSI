#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
float a,b,c;
printf("Podaj liczbe a\n");
scanf("%g",&a);
printf("Podaj liczbe b\n");
scanf("%g",&b);
if ((a+b)!=0)
{
c=((a*a)+b)/((a+b)*(a+b));
printf("Rozwiazanie: %g",c);
}
else printf("Proba dzielenia przez 0\n");
	return 0;
}
