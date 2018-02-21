#include<stdio.h>
#include<conio.h>
voic main()
{
int count=0,i;
char s[77];
printf("Enter the string:\n");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;
}
printf("Number of words in the given string are:\n",count+1);
getch();
}
