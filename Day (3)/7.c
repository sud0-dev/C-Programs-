#include<stdio.h>
void main()
{
int i=0,f=1,d,a=0,n,r;
printf("\nEnter any number: ");
scanf("%d",&n);
d=n;
while(d>0)
{
r=d%10;
for(i=r,f=1;i>0;i--)
f=f*i;
a=a+f;
d=d/10;
}
if(a==n)
printf("%d is a strong number\n",n);
else
printf("%d is not a strong number\n",n);
}

