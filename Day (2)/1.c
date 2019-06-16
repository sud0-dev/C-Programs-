#include<stdio.h>
#include<math.h>
void main()
{
float p,t,r,si,ci;
printf("\nEnter marks in Principle, Time and Rate: ");
scanf("%f",&p);
scanf("%f",&t);
scanf("%f",&r);
si=(p*t*r)/100;
ci=p*pow((1+r/100),t);
printf("\nSimple Interest: %0.2f",si);
printf("\nCompound Interst: %0.2f",ci);
printf("\n");
}
