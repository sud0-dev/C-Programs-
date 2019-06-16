#include<stdio.h>
int check(int n)
{
int f=1;
for(int j=2;j<n/2;j++)
{
if(n%j==0)
{
f=0;
break;
}
return(f);
}
}

void main()
{
int n=0;
printf("\nEnter Number: ");
scanf("%d",&n);
if(check(n))
printf("\nPrime\n");
else
printf("\nComposite\n");
}
