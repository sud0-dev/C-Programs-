#include<stdio.h>
void main()
{
int i,k;
char c;
for(i=0;i<5;i++)
{
 c='A'+i;
 for(k=0;k<5-i;k++)
  {
   printf("%c",c++);
  }
  printf("\n");
}
}
