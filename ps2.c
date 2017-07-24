#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("enter upper limit:");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
{
sum+=1;
}
printf("sum of odd number=%d",sum);
}
