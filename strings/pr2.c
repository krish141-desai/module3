// /Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i ;
    char string[]="krish";
    printf("individual characters from given string:\n");
    for(i=0;i<strlen(string);i++){
        printf("%c",string[i]);
    }

}