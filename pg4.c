#include<stdio.h>
void main()
{
char c;
printf("enter the character:");
scanf("%c",c);
if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
printf("%c is the alphabet",c);
else
printf("%c is not the alphabet",c);
}
