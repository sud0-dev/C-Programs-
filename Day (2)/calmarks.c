#include<stdio.h>
void main()
{
int i=0,n=0,m=0;
printf("\nEnter marks in Physics, Chemistry and Maths: ");
while(i<3)
{
printf("\nEnter Marks: ");
scanf("%d",&n);
m=m+n;
i++;
}
n=m/3;
printf("\nTotal Marks: %d\n",m);
printf("\nAverage: %d\n",n);
if(n>=90)
printf("\nGrade: O");
else if(n>=80)
printf("\nGrade: E");
else if(n>=70)
printf("\nGrade: A");
else if(n>=60)
printf("\nGrade: B");
else if(n>=50)
printf("\nGrade: C");
else if(n>=40)
printf("\nGrade: D");
else
printf("\nGrade: F");
printf("\n");
}

