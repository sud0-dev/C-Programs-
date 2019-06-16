#include<stdio.h>
#include<string.h>
void main()
{
int i;
char ch[10];
printf("\nEnter string: ");
for(i=0;i<10;i++)
scanf("%c",&ch[i]);
for(i=0;i<10;i++)
{
if(ch[i])
printf("%c",ch[i]);
}
