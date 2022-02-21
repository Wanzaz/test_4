#include <stdio.h>
#include <stdlib.h>

/*
25. Napište funkci, která vezme řetězec a vrátí index znaku s nejvyšším ordinálním číslem (číslem v ASCII tabulce). Př.: Ahoj -> 2 (index znaku 'o').
25. Write a function that takes a string and returns the index of the character with the highest ordinal number (the number in the ASCII table). Ex .: Ahoj -> 2 (index of the 'o' character).
*/

int highest_index_in_ascii(char str[]);

int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    printf("The index of the highest character in ASCII is %d", highest_index_in_ascii(str));
    return 0;
}

int highest_index_in_ascii(char str[])
{
    int i=0;
    int highest=0;
    char content=str[i];

    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] > content)
        {
            content = str[i];
            highest = i;
        }
    }

    return highest;
}

