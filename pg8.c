#include<stdio.h>
void main()
{
int i,num,sum=0;
printf("enter an integer number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("%d is the sum of natural number");
scanf("%d",&sum);
}
