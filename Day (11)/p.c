#include<stdio.h>
void main()
{
int n;
printf("\nEnter n: ");
scanf("%d",&n);
for(int i=0;i<4;i++)
{
for(int j=0;j<=i;j++)
printf(" ");
printf("*");
for(int j=n-2*i;j>0;j--)
printf(" ");
printf("*");
for(int j=0;j<2*i;j++)
printf(" ");
printf("*");
for(int j=n-2*i;j>0;j--)
printf(" ");
printf("*");
printf("\n");
}
}

