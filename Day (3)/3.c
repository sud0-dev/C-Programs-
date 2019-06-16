#include<stdio.h>
void main()
{
int a,b,c;
printf("\nEnter the value of a and b: ");
scanf("%d%d",&a,&b);
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

