#include<stdio.h>
void main()
{
for(int i=1;i<=5;i++)
{
for(int k=1;k<=5-i;k++)
printf(" ");
for(int j=1;j<=i;j++)
printf("* ");
printf("\n");
}
printf("\n");
}
