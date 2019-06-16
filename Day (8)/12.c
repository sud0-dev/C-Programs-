#include<stdio.h>
void main()
{
int i,k;
char c;
for(i=4;i>=0;i--)
{
 c='E';
 for(k=4;k>=4-i;k--)
  {
   printf("%c",c--);
  }
  printf("\n");
}
}
