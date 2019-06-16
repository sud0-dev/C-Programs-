#include<stdio.h>
void main()
{
int i=0,a,b,p=1;
printf("\nEnter the value of a and b: ");
scanf("%d%d",&a,&b);
while(i<b)
{
p=p*a;
i++;
}
printf("%d to the power of %d is %d\n",a,b,p);
}

