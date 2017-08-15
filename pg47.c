#include <stdio.h>
int main()
{
    unsigned int min,max,in,buf;
    min=0,max=0;
  printf("\nEnter The Numbers or press Zero to exit....");
    do
    {
        scanf("%u",&in);
        if(in!=0)
        {
            if(in>=max)
            {
                max=in;
            }
            if(in<=buf)
            {
                min=in;
            }
            buf=in;
        }
        else
        {
            printf("The Max & Min value Entered are : %u %u",max,min);
            break;
        }
    }while(1);
}
