#include<stdio.h>
void main()
{
int year;
printf("enter the year:");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
{
printf("%d is the leap year",year);
else
printf("%d is not a leap year",year);
}
else
printf("%d is the leap year",year);
}
else
printf("%d is the leap year",year);
}
}
