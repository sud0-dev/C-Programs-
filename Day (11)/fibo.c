#include<stdio.h>
int n;
void main()
{
int i,c=0;
printf("\nEnter the value of n: ");
scanf("%d",&n);
if(n>2)
fibo(-1,1,1);
else
for(int j=1;j<i;j++)
printf("%d",c++);
}

void fibo(int a,int b,int i)
{
int c;
c=a+b;
if(i<=n)
{
printf("%d ",c);
i++;
fibo(b,c,i);
}
else
printf("\n");
}
