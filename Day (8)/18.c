#include<stdio.h>
void main()
{
int i,k,n=1,c=1,t=0;
for(i=0;i<5;i++)
{
  for(k=0;k<=i;k++)
  {
   printf("%d ",n);
   n=c+t;
   t=c;
   c=n;
  }
  printf("\n");
}
}
