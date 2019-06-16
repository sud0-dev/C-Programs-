#include<stdio.h>
void main()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
factorial(n);
}

void factorial(int n)
{
int f=1;
while(n>1)
{
f=f*n;
n--;
}
printf("\nFactorial is: %d",f);
printf("\n");
}
