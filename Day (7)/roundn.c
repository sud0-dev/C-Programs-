#include<stdio.h>
#include<math.h>
void roundn(float n,int d)
{
int x,c;
x=n;
n=n-x;
c=n*pow(10,d);
if(c%10>=5)
c=c+1;
n=0;
n=x+(c*pow(0.1,d));
printf("\n%f\n",n);
}

void main()
{
float n;
int d;
printf("\nEnter any decimal number: ");
scanf("%f",&n);
printf("\nEnter the no of digits to round off: ");
scanf("%d",&d);
roundn(n,d);
}
