#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
16. Napište funkci, která vezme øetìzec a vrátí 1, pokud je  øetìzec palindromem, jinak vrátí 0? (oko, radar).
16. Write a function that takes a string and returns 1 if the string is a palindrome, otherwise it returns 0 (eye, radar).
*/

void reverse_copy(char *source, char *target);
int palidrome(char *normal, char *reverse);
void copy(char *source,char *target);

int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    char str2[40];
    
    copy(str, str2);
    reverse_copy(str, str2);
    
    if(palidrome(str, str2)==0)
        printf("The word is palidrome");
    else
        printf("The word is not palidrome");

    return 0;
}

void reverse_copy(char *source, char *target)
{
    int i;
    int length = strlen(source);
    for(i=0;i <= length;i++)
    {
        target[i] = source[length - 1 - i];
    }
    target[i] = '\0';
}

void copy(char *source,char *target)
{
    int i;
    for(i=0;source[i]!='\0';i++)
    {
        target[i] = source[i];
    }
    target[i]='\0';
}

int palidrome(char *normal, char *reverse)
{
    if(strcmp(normal, reverse)==0)
        return 0;
    return 1;
    target[i] = '\0';
}

