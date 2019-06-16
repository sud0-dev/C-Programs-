#include<stdio.h>
#include<math.h>
void main()
{
int i=1,j=0,p,k,n;
printf("\nEnter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
k=n-i;
while(k>0)
 {
  printf(" ");
  k--;
 }
j=j*10+1;
p=pow(j,2);
printf("%d",p);
printf("\n");
i++;
}
}
