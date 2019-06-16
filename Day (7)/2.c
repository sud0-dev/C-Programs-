#include<stdio.h>
int x=2;
int y=3;
void exchange()
{
x=x+y;
y=x-y;
x=x-y;
//return(x,y);
}

void main()
{
printf("\nNumbers before exchange: %d & %d",x,y);
exchange();
printf("\nNumbers after exchange: %d & %d\n",x,y);
}
