#include<stdio.h>
void main()
{
char line[50];
int i,vowels=0,consonants=0;
printf("enter the line:\n");
gets(line);
for(i=0;line[i]!='\0';i++)
{
if((line[i]='a')||(line[i]='e')||(line[i]='i')||(line[i]='o')||(line[i]='u')||(line[i]='A')||(line[i]='E')||(line[i]='I')||(line[i]='O')||(line[i]='U'))
{
vowels=vowels+1;
}
else
{
consonants=consonants+1;
}
}
printf("vowels:%d",vowels);
printf("\nconsonants:%d",consonants);
}
