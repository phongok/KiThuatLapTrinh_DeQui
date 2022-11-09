#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	
	printf("Nhap b: ");
	scanf("%d", &b);
	
	printf("Uoc so chung lon nhat la: %d", gcd(a,b));
	
	return 0;
}