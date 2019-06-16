#include<stdio.h>
#include<math.h>
void roundn(float n)
{
int x,c;
x=n;
n=n-x;
c=1000*n;
if(c%10>=5)
c=c/10+1;
else
c=c/10;
n=0;
n=x+c*0.01;
printf("\n%0.2f\n",n);
}

void main()
{
float n;
printf("\nEnter any decimal number: ");
scanf("%f",&n);
roundn(n);
}
