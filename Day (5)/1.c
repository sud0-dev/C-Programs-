#include<stdio.h>
void main()
{
int a,b,n;
printf("\nEnter any 2 numbers: ");
scanf("%d%d",&a,&b);
printf("\n1.Add \n2.Subtract \n3.Multiply \n4.Divide \nEnter the choice of operation: ");
scanf("%d",&n);
switch(n)
{
case 1:
{
add(a,b);
break;
}
case 2:
{
sub(a,b);
break;
}
case 3:
{
mul(a,b);
break;
}
case 4:
{
div(a,b);
break;
}
default:
printf("\nWrong Option !");
}
}

void add(int p, int q)
{
int r;
r=p+q;
printf("\nThe Answer is: %d",r);
printf("\n");
}

void sub(int p, int q)
{
int r;
if(p>q)
r=p-q;
else
r=q-p;
printf("\nThe Answer is: %d",r);
printf("\n");
}

void mul(int p, int q)
{
int r;
r=p*q;
printf("\nThe Answer is: %d",r);
printf("\n");
}

void div(int p, int q)
{
float r;
r=p/q;
printf("\nThe Answer is: %0.2f",r);
printf("\n");
}
