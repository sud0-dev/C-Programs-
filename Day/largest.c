#include<stdio.h>
void main()
{
int a,b,c;
printf("\nEnter three numbers: ");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("\nLargest number is %d\n",a);
if(b>c && b>a)
printf("\nLargest number is %d\n",b);
else
printf("\nLargest number is %d\n",c);
}
