#include<stdio.h>
#include<math.h>
void main()
{
int i=0,d,a=0,r;
printf("\nEnter any number: ");
scanf("%d",&d);
while(d>0)
{
r=d%2;
a=a+pow(10,i++)*r;
d=d/2;
}
printf("Binary no is: %d",a);
printf("\n");
}

