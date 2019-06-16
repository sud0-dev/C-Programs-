#include<stdio.h>
void main()
{
int i,m,m80,m60,m40;
i=m80=m60=m40=0;
while(i<=10)
{
m=0;
printf("\nEnter Marks: ");
scanf("%d",&m);
if(m>80)
m80++;
else if(m>60)
m60++;
else if(m>40)
m40++;
else
printf("\nGo study you moron\n");
i++;
}
printf("\nNumber of students who got above 80, 60 and 40 are %d,%d and %d\n",m80,m60,m40);
}
