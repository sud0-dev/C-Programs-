#include<stdio.h>
int sum(int n)
{
int s=0;
while(n>0)
{
s=s+(n%10);
n=n/10;
sum(n);
}
return s;
}

void main()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
printf("\nSum is: %d\n",sum(n));
}
