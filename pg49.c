#include <stdio.h>
#include <stdlib.h>
void sumarray(int k,int A[k],int B[k])
{
   int sum[k],i;
   for(i=0;i<k;i++)
   {                
   sum[i]=A[i]+B[i];
   printf("sum[%d]=%d\n",i,sum[i]);
   }
 }
void main()
{
   int i,g,a[g],b[g];
   printf("Give size of both arrays: ");
   scanf("%d",&g);
   for(i=0;i<g;i++)
   {
      a[i]=rand();
      b[i]=rand();
   }
   sumarray(g,a,b);
   system("pause");
}
