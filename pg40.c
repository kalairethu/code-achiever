#include<stdio.h>
voidmain()
{
int n,rn=0,r;
printf("enter an integer:");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rn=rn*10+r;
n/=10;
}
printf("rn=%d",rn);
}
