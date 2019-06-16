#include<stdio.h>
void main()
{
int flag=0,n=2,i;
while(n<=100)
{
i=2;
while(i<n || flag!=0)
{
if(n%i==0)
{
flag=1;
break;
}
else
printf("\n%d",n);
i++;
}
n++;
}
printf("\n");
}
