#include <stdio.h>
int Oddsum(int* a, int n)
{
	if ( n == 0)
	return a[0];
    if ( a[n] % 2 != 0)
	return Oddsum(a, n-1) + a[n];
	return Oddsum(a, n-1) + 0;
}

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("%d\n",Oddsum(a, n-1));
}