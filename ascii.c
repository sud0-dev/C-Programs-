#include<stdio.h>
//using namespace std;
void key(int a)
{
char c;
c=a;
printf("\nthe equivalent alphabet is : %c",c);
}

void character(char a)
{
int c;
c=a;
printf("\nthe ascii code is : %d",c);
}

main()
{
int b,n;
char d;
printf("\n1.Code to key \n2.Key to code \nEnter Choice: ");
scanf("%d",&n);
if(n==1)
{
printf("\nenter the ascii code :");
scanf("%d",&b);
key(b);
}
else if(n==2)
{
printf("\nenter the alphabet :");
scanf(" %c",&d);
character(d);
}
else
printf("\nWrong Choice !");
printf("\n");
}

