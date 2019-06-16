#include<stdio.h>
void main()
{
int i=0,n,k,j;
printf("\nEnter value of n: ");
scanf("%d",&n);
for(i=0;i<n/2;i++)
{
 for(j=0;j<=i;j++)
  {
   if(j==0 || j==i)
   printf("*");
   else
   printf(" ");
  }
printf("\n");
}
k=n/2-1;
for(i=0;i<n/2-1;i++)
{
 for(j=0;j<=n/2;j++)
  {
   if(j==0 || j==k)
   printf("*");
   else
   printf(" ");
 }
printf("\n");
k--;
}
for(i=0;i<n;i++)
{
 printf("*");
 printf("\n");
}
printf("\n");
}
