#include<stdio.h>
void main()
{
swap();
}

void swap()
{
int a,b;
printf("\nEnetr 2 numbers: ");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nSwapped numbers: %d and %d",a,b);
printf("\n");
}
