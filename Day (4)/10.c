#include<stdio.h>
void main()
{
int i=1,j,n;
printf("\nEnter value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
for(j=1;j<=i;j++)
printf("%d",j);
}
else
{
for(j=i;j>=1;j--)
printf("%d",j);
}
printf("\n");
}
printf("\n");
}