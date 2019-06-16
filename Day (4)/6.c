#include<stdio.h>
void main()
{
int i=0,n,k=1;
printf("\nEnter value of n: ");
scanf("%d",&n);
while(i<=n)
{
int j=1;
while(j<=i)
 {
  if(k%2!=0)
  {
  printf("1");
  k++;
  }
  else
  {
  printf("0");
  k++;
  }
j++;
 }
printf("\n");
i++;
}
}
