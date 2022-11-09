#include <stdio.h>
#include <iostream>
using namespace std;
double TinhDanSo(int n)
{
    if (n == 2018)
        return 8000000000;
    return TinhDanSo(n-1)*1.025;
}
int main()
{
   int n;
   printf("Nhap nam: ");
   scanf("%d", &n);
   printf("Dan so cua nam %d la %lf", n , TinhDanSo(n));
	return 0;
}
 