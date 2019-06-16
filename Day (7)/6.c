#include<stdio.h>
void main()
{
int y;
printf("\nEnter Year: ");
scanf("%d",&y);
if(leap(y))
printf("\nLeap Year\n");
else
printf("\nNot Leap Year\n");
}

int leap(int y)
{
if(y%400==0)
return(1);
else if(y%4==0 && y%100!=0)
return(1);
else
return(0);
}
