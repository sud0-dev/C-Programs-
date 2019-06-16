#include<stdio.h>
void main()
{
int x=2,y=3;
y=x++ + y--;
x=x-- + ++y;
y=++x + --y;
printf("\n%d %d\n",x,y);
}
