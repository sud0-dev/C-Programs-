#include<stdio.h>
int power(int a,int b)
{
int c;
if(b<1)
return 1;
else
return c=a*power(a,b-1);
}

void main()
{
int a,b;
printf("\nEnter any 2 numbers: ");
scanf("%d%d",&a,&b);
printf("Power is: %d\n",power(a,b));
}
