#include<stdio.h>
void main()
{
int n,f=1;
printf("\nEnter a number: ");
scanf("%d",&n);
while(n>1)
{
f=f*n;
n--;
}
printf("\nFactorial is: %d",f);
printf("\n");
}
