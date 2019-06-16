#include<stdio.h>
#include<math.h>
int n;
void pattern(int i, int p)
{
int c=1;
float s;
if(i>2*n)
printf("\nSum of series: %f\n",s);
else
{
for(int j=1;j<=i;j++)
c=c*j;
s=pow(-1,p)*(i/c);
i=i+2;p++;
pattern(i,p);
}
}

void main()
{
printf("\nEnter the number of terms: ");
scanf("%d",&n);
pattern(1,0);
}

