#include<stdio.h>
void main()
{
int n;
printf("\nEnter the value of n: ");
scanf("%d",&n);
fibo(n);
}

void fibo(int n)
{
int c,i=0,a=0,b=1;
printf("%d %d ",a,b);
while(i<n-2)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
i++;
}
printf("\n");
}
