#include<stdio.h>
void main()
{
int flag=0,n,i;
printf("\nEnter a number: ");
scanf("%d",&n);
if(flag!=1)
{
i=n-1;
while(i>2)
{
if(n%i==0)
{
printf("\nNumber is composite");
flag=1;
break;
}
else
{}
i--;
}
}
else
{}
printf("\nNumber is Prime");
printf("\n");
}
