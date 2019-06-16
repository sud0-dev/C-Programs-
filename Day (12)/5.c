#include<stdio.h>
int arms(int n)
{
int s=0;
while(n>0)
{
s=10*s+(n%10);
n=n/10;
arms(n);
}
return s;
}

void main()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
if(n==arms(n))
printf("\nAmstrong Number\n");
else
printf("\nNot an Amstrong Number\n");
}
