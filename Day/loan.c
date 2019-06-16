#define MAXLOAN 50000
#include<stdio.h>
void main()
{
 long int loan1, loan2, loan3, loan4, sancloan, sum23;
 printf("\nEnter the values of previous two loans: ");
 scanf("%ld%ld",&loan1,&loan2);
 printf("\nEnter the values of new loan: \n");
 scanf("%ld",&loan3);
 sum23=loan2=loan3;
 sancloan=(loan1>0)?0:((sum23>MAXLOAN)?MAXLOAN-loan2:loan3);
 printf("\n\n");
 printf("\nPrevious loans pending: %ld\n%ld\n",loan1,loan2);
 printf("\nLoan requested= %ld",loan3);
 printf("\nLoan sanctioned= %ld\n",sancloan);
}
