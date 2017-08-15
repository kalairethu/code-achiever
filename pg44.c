#include <stdio.h>
 int main()
{
      int num = 0, remainder = 0;
      while(num != -1)
      {
            printf("Enter an integer (-1 to stop): ");
           scanf_s("%d", &num, sizeof(int));
                   if(num != -1)
            {
                  remainder = num % 2;
                     if(remainder == 0)
                        printf("%d is an even number.\n", num);
                  else
                        printf("%d is an odd number.\n", num);
            }
      }
        printf("%d is an odd number.\n", num);
      printf("You ask to stop! Thank you.\n");
      }
