#include<stdio.h>
void main()
{
int x,y;
double power(int,int);
printf("\nEnter x and y: ");
scanf("%d%d",&x,&y);
printf("\n%d\n",power(x,y));
}

double power(int x,int y)
{
double p=1.0;
if(y>0)
 while(y--)
  p*=x;
else
 while(y++)
  p/=x;
return p;
}
