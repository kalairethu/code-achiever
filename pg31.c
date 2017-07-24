#include<stdio.h>
void main()
{
fp=fopen("chumma.c","r");
while((c=getc(fp))!=EOF)
{
    cn++;
    if((c=='\n') || (c==';'))
    {
         if((cn-1)==0)
            em++;
        n++;
        printf("\nNo. of char in line %d : %d\n",n,(cn-1));
        ll[n-1]=cn-1;
        cn=0;
    }
}
}
