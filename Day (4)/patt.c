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
  if (j==1 || j==(2*i)-1)
  {
   printf("1");
   j++;
  }
  else
  {
   printf("2");
   j++;
  }
 }
printf("\n");
i++;
}
}
