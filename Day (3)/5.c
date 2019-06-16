#include<stdio.h>
void main()
{
int i=0,d,a=0,n,r;
printf("\nEnter any number: ");
scanf("%d",&n);
d=n;
while(d>0)
{
r=d%10;
a=a+(r*r*r);
d=d/10;
i++;
}
if(a==n)
printf("%d is an amstrong number\n",n);
else
printf("%d is not an amstrong number\n",n);
}

