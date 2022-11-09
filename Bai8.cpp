#include<stdio.h>
#include<conio.h>
 
int SUMMang(int n,long SUM, int a[])
{
    if(n < 0) return SUM;
   else SUM += a[n-1];
   SUMMang(n-1,SUM, a);
}
 
int main ()
{
    
    int N, i;
    int a[100];
    long SUM = 0;
    printf("\n Nhap vao N:");
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        printf("\n Nhap Phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    SUM = SUMMang(N,SUM,a);
    printf("\n Tong SNT = %.2ld", SUM);
    getch();
    return 0;
}