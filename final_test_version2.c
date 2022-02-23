#include <stdio.h>
#include <stdlib.h>
/*
8. Napište funkci, která vezme řetězec a všechny znaky 'a' nahradí znakem '*';
8. Write a function that takes a string and replaces all 'a' characters with '*';
*/

void replace_a(char *str);

int main()
{
    char str[40];
    printf("Enter something to the str: ");
    scanf("%39s", str);

    replace_a(str);
    puts(str);

    return 0;
}

void replace_a(char *str)
{
    int i;
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] == 'a')
            str[i] = '*';
    }
}
