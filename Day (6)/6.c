#include<stdio.h>
void main()
{
int n;
printf("\nEnter the value of n: ");
scanf("%d",&n);
series(n);
}

void series(int n)
{
int i;
for (i=1;i<=n;i++)
printf("%d ",(i-1)+fact(i));
printf("\n");
}

int fact(int n)
{
int f=1;
while(n>1)
{
f=f*n;
n--;
}
return(f);
}
