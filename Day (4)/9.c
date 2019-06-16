#include<stdio.h>
void main()
{
int i=1,j,n;
char c;
printf("\nEnter value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c='A';
if(i%2!=0)
{
for(j=0;j<i;j++)
printf("%c",c+j);
}
else
{
for(j=i-1;j>=0;j--)
printf("%c",c+j);
}
printf("\n");
}
printf("\n");
}
