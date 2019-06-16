#include<stdio.h>
void main()
{
int i=0,j,n;
char c;
printf("\nEnter value of n: ");
scanf("%d",&n);
while(i<=n)
{
j=1;
c='A';
while(j<=i)
 {
  printf("%c",c++);
  j++;
 }
printf("\n");
i++;
}
}
