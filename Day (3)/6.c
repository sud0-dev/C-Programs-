#include<stdio.h>
void main()
{
int i=0,n,a=0,b=1;
printf("\nEnter the value of n: ");
scanf("%d",&n);
while(i<n/2)
{
printf("%d,%d,",a,b);
a=a+b;
b=a+b;
i++;
}
printf("\n");
}

