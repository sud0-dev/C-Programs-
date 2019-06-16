#include<stdio.h>
void main()
{
int i=1,j,k,n;
printf("\nEnter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
j=1;k=n-i;
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
}
