#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<5;i++)
{
 for(k=0;k<5;k++)
 {
 if(i==0 || i==4 || k==0 || k==4)
 printf("1");
 else
 printf(" ");
 }
 printf("\n");
}
}
