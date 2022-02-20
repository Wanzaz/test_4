#include <stdio.h>
#include <stdlib.h>

/*
21. Napište funkci, která vezme řetězec a vymaže z něj první znak.
21. Write a function that takes a string and deletes the first character from it.
*/

void delete_first_element(char source[]);


int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    delete_first_element(str);
    puts(str);

    return 0;
}

void delete_first_element(char source[])
{
    int i;
    for(i=0;source[i] != '\0';i++)
    {
        source[i] = source[i + 1];
    }
}

