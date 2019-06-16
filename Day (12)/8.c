#include<stdio.h>
int n;
void natural(int i)
{
if(i<=n)
{
printf("%d ",i++);
natural(i);
}
else
printf("\n");
}

void main()
{
printf("\nEnter the number of terms: ");
scanf("%d",&n);
natural(1);
}
