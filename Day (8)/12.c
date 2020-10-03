#include<stdio.h>
void main()
{
int i,k;
char c;
for(i=4;i>=0;i--)
{
 c='E';
 for(k=4;k>=4-i;k--)
  {
   printf("%c",c--); // c-- to decrease character value from E to D and further..
  }
  printf("\n"); // neline for pyramid pattern
}
}
