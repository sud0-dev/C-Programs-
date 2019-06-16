#include<stdio.h>
void main()
{
int i=1,j,k,n;
printf("\nEnter n: ");
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
i=n;
while(i>0)
{
k=0;j=2*i;
while(k<=n-i)
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
