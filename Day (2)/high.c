#include<stdio.h>
void main()
{
int a,b,c;
printf("\nEnter 3 numbers: ");
scanf("%d%d%d",&a,&b,&c);
a>b?(a>c?printf("\nHighest: %d",a):printf("\nHighest: %d",c)):(b>c?printf("\nHighest: %d",b):printf("\nHighest: %d",c));
printf("\n");
}
