#include<stdio.h>
void main()
{
int i=0,n;
printf("\nEnter value of n: ");
scanf("%d",&n);
while(i<=n)
{
int j=1;
while(j<=i)
 {
  printf("*");
  j++;
 }
printf("\n");
i++;
}
}
