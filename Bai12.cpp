#include <stdio.h>
float NegAverage(int* a, int n)
{
	int tam = 0;
    if ( a[n]  < 0)
	{
		return (NegAverage(a, n-1) + a[n]);
	}
		


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
	printf("%f\n",NegAverage(a, n-1));
}