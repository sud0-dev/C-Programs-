#include<stdio.h>
void main()
{
int n;
printf("\nEnter any number: ");
scanf("%d",&n);
sumd(n);
}

void sumd(int n)
{
int s=0;
while(n>0)
{
s=s+n%10;
n=n/10;
}
printf("\nThe sum of digits are: %d\n",s);
}
