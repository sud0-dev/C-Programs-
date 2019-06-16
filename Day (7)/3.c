#include<stdio.h>
void main()
{
int a,b,n;
printf("\nEnter any two numbers: ");
scanf("%d%d",&a,&b);
printf("\nEnter number spaces: ");
scanf("%d",&n);
space(a,b,n);
}

void space(int a,int b,int n)
{
printf("\n%d",a);
for(int i=0;i<n;i++)
printf("*");
printf("%d\n",b);
}
