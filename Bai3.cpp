#include <stdio.h>
#include <iostream>
using namespace std;
double TinhTongSoHang(int n)
{
  
   if(n<10)
   	return n;
   	return n%10 + TinhTongSoHang(n/10);
}
int main()
{
   int n;
   printf("Nhap so n: ");
   scanf("%d", &n);
   printf("Dan so cua nam %d la %lf", n , TinhTongSoHang(n));
	return 0;
}
 