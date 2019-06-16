#include<stdio.h>
void main()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
if(prime(n,2))
printf("\nPrime Number\n");
else
printf("\nComposite Number\n");
}

int prime(int n,int i)
{
while(i<n)
{
if (n%i==0)
{
break;
return 0;
}
else
{
i++;
prime(n,i);
}
}
}
