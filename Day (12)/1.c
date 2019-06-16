#include<stdio.h>
int sum(int n)
{
if(n>0)
return n+sum(n-1);
else
return 0;
}

void main()
{
int n;
printf("\nEnter the number of terms: ");
scanf("%d",&n);
printf("\nSum is: %d\n",sum(n));
}
