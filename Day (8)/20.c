#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<5;i++)
{
 for(k=0;k<5-i;k++)
 {
 if(i%2==0)
 printf("1");
 else
 printf("0");
 }
 printf("\n");
}
}
