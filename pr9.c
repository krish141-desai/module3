// C Program to Check Uppercase or Lowercase or Digit or Special
// Character

#include <stdio.h>
int main(void)
{
char ch;
printf("Enter any character: \n");
scanf("%c", &ch);
if(ch >= 'A' && ch <= 'Z')
{
printf(" '%c' is uppercase ", ch);
}
else
if(ch >= 'a' && ch <= 'z')
{
printf(" '%c' is lowercase ", ch);
}
else
if(ch >= '0' && ch <= '9')
{
printf(" '%c' is digit.", ch);
}
else
printf(" '%c' is special character.", ch);
return 0;
}