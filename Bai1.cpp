#include <stdio.h>
#include <iostream>
using namespace std;
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
   int n;
   printf("Nhap n: ");
   scanf("%d", &n);
   printf("Giai thua cua %d la %d", n , giaiThua(n));
	return 0;
}
 