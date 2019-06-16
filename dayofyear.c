#include<stdio.h>
void main()
{
int d=0,dd,mm,yy;
printf("\nEnter Day, Month and Year: ");
scanf("%d%d%d",&dd,&mm,&yy);
for(int i=1;i<mm;i++)
 {
  if(i==2)
   {
    if(yy%4==0 || (yy%4==0 && yy%100!=0))
    d=d+29;
    else
    d=d+28;
   }
  else if(i==4 || i==6 || i==9 || i==11)
  d=d+30;
  else
  d=d+31;
}
d=d+dd;
printf("\nDay of the year is: %d\n",d);
}
