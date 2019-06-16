#include<stdio.h>
#include<math.h>
void main()
{
float n;
double a;
int d,r,i=0;
printf("\nEnter any decimal number: ");
scanf("%f",&n);
d=n;
n=n-d;
while(d>0)
{
r=d%2;
a=a+pow(10,i++)*r;
d=d/2;
}
i=1;
while(i<6)
{
r=n*2;
n=n*2-r;
a=a+pow(0.1,i++)*r;
}
printf("\nBinary Number is: %0.5lf\n",a);
}
