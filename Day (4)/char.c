#include<stdio.h>
void main()
{
int i=1,j,k,n;
char c='A';
printf("\nEnter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
j=1;k=n-i;c='A';
while(k>0)
 {
  printf(" ");
  k--;
 }
while(j<2*i)
 {
  printf("%c",c++);
  j++;
 }
printf("\n");
i++;
}
}
