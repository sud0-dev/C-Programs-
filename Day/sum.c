#include<stdio.h>
void main()
{
int i=101,s=0,s2=0;
while(i<200)
{
s2=s;
s=s+i;
printf("%d+%d=%d\n",s2,i,s);
i++;
}
printf("\nSum of numbers greater than 100: %d\n",s);
}
