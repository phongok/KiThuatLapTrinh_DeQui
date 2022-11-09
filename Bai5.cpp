#include <stdio.h>
int Ackermann(int m, int n)
{
if(m==0) return n+1;
else if(n==0) return Ackermann(m-1,1);
else
return Ackermann(m-1,Ackermann(m,n-1));
}

int Ackermann(int m, int n, int sl)
{
sl++;
if(m==0) return n+1;
else if(n==0) return Ackermann(m-1,1,sl);
else
return Ackermann(m-1, Ackermann(m,n-1),sl);
}

int main(){
int n1=0;

printf(" %d", Ackermann(3,5));

}