#include<stdio.h>
#include<math.h>
void main()
{
double f;
float c=0;
int x,d,i=0;
printf("\nEnter an floating binary: ");
scanf("%lf",&f);
x=f;
f=f-x;
while(x>0)
{
c=c+pow(2,i++)*(x%10);
x=x/10;
}
i=1;
while(i<=5)
{
d=10*f;
f=(f*10)-d;
c=c+(pow(0.5,i++)*d);
}
printf("\nDecimal Number is : %f\n",c);
}
