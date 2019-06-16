#include<stdio.h>
void main()
{
int a,b;
printf("\nEnter the value of a and b: ");
scanf("%d%d",&a,&b);
gcd(a,b);
}

void gcd(int a,int b)
{
int c;
while(b!=0)
{
if (a%b!=0)
{
c=b;
b=a%b;
}
else
break;
a=c;
}
printf("\nGCD of is: %d\n",b);
}
