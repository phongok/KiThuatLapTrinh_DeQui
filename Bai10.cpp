#include <stdio.h>
int MaxArr(int a[], int n)
{
    if (n == 1)
        return a[0];
  
    if (MaxArr(a, n-1) > a[n-1])
        return MaxArr(a, n-1);
    else
        return a[n-1];
}


void nhapmang(int a[], int &n)
{
	do
	{
		printf("\nSo phan tu trong mang ");
		scanf("%d",&n);
	}while(n<=0 && n>100);
	for(int i=0 ; i<n ; i++ )
	{
		printf("\nSo phan tu a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
}

int main(){
	int a[100],n;
	nhapmang(a,n);
	printf("\nGia tri MAX = %d", MaxArr(a,n));
	
}

