#include<stdio.h>
void main()
{
int n,s=0;
printf("\nEnter the value of numbers: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
s=s+j;
}
printf("\nSum of numbers: %d\n",s);
}

