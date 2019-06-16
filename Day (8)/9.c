#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<5;i++)
{
 for(j=1;j<=5-i;j++)
  printf(" ");
 for(k=i;k>=0;k--)
  printf("%d",k);
 for(k=1;k<=i;k++)
  printf("%d",k);
 printf("\n");
}
}
