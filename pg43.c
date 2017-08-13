#include<stdio.h>
void main() 
{
    char s1[100], s2[100];
    int i;
    puts("First string?");
    gets(s1);
    puts("Second string?");
    gets(s2);
    for (i = strlen(s1); i <= (strlen(s1) + strlen(s2)); i++)
    {
        s1[i] = s2[i - strlen(s1)];
    }
  puts(s1);
}
