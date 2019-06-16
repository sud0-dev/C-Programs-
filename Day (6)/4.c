#include<stdio.h>
void main()
{
int a,b;
printf("\nEnter the value of a and b: ");
scanf("%d%d",&a,&b);
power(a,b);
}

void power(int a, int b)
{
int i=0,p=1;
while(i<b)
{
p=p*a;
i++;
}
printf("%d to the power of %d is %d\n",a,b,p);
}
