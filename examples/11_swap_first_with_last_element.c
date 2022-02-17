#include <stdio.h>
#include <stdlib.h>
/*
11. Napište funkci, která vezme řetězec a přehodí v něm první a poslední znak.
11. Write a function that takes a string and swaps the first and last characters in it.
*/

void swap(char *str);

int main()
{
    char str[40];
    printf("Enter something to the str: ");
    scanf("%39s", str);

    swap(str);
    puts(str);

    return 0;
}

void swap(char *str)
{
    int i;
    for(i=0;str[i] != '\0';i++)
        {;}
    char help = str[0];
    str[0] =str[i - 1];
    str[i - 1] = help;
}
