#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<4;i++)
{
 for(k=i+1;k<=4;k++)
 printf("%d",k);
 for(j=i;j>=1;j--)
 printf("%d",j);
 printf("\n");
}
}
