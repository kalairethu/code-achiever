#include<stdio.h>
void main()
{
int base,exponent;
long long result=1;
printf("enter the base number");
scanf("%d",&base);
printf("enter the exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
printf("answer ="%lld",result);
}
