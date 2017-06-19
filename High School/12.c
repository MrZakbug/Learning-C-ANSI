#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int S(int a)
{
	if (a == 0 || a == 1) return 1;
	else
		return S(a - 1) *a;
}

int main()
{
	int n, k;
	long symbol;

	printf("Podaj liczbe n: ");
	scanf("%d", &n);
	printf("Podaj liczbe k: ");
	scanf("%d", &k);

	if (k == 0 || n == k){
		symbol = 1;
	}
	if (k > 0 && k < n){
		symbol = S(n) / (S(k)*S(n - k));
	}
	
	printf("Wartosci symbolu Newtona dla n=%d i k=%d wynosi: %d", n, k, symbol);

	return 0;

}