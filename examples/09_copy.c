#include <stdio.h>
#include <stdlib.h>
/*
9. Napište funkci, která vezme dva řetězce a zkopíruje první řetězec do druhého.
9. Write a function that takes two strings and copies the first string to the second.
*/

void copy(char *source, char *target);

int main()
{
    char str[40], str2[40];
    printf("Enter something to the str: ");
    scanf("%39s", str);

    copy(str, str2);
    puts(str2);

    return 0;
}

void copy(char *source, char *target)
{
    int i;
    for(i=0;source[i]!='\0';i++)
    {
        target[i] = source[i];
    }
    target[i]='\0';
}

