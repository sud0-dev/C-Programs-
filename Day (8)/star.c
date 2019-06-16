#include<stdio.h>
void main()
{
int i=1,j,k;
while(i<=4)
{
j=1;k=4-i;
while(k>0)
 {
  printf(" ");
  k--;
 }
while(j<2*i)
 {
  printf("*");
  j++;
 }
printf("\n");
i++;
}
i=4;
while(i>0)
{
k=0;j=2*i;
while(k<=4-i)
{
printf(" ");
k++;
}
while(j>=4)
 {
  printf("*");
  j--;
 }
printf("\n");
i--;
}
}
