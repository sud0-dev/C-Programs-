#include<stdio.h>
void main()
{
int i,k;
char c;
for(i=0;i<5;i++)
{
 c='A';
 for(k=0;k<=i;k++)
  {
   printf("%c",c++);
  }
  printf("\n");
}
}
