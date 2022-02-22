#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
15. Napište funkci, která vezme řetězec a otočí v něm znaky bez pomocného pole. Př. slovo → ovols
15. Write a function that takes a string and rotates characters in it without an auxiliary field. Ex. word → drow
*/

void reverse(char *source);

int main(void)
{
    char str[20];
    printf("Enter something to the str: ");
    scanf("%19s", str);

    reverse(str);;
    puts(str);

    return 0;
}

void reverse(char *source)
{
    int i, length, help;

    length = strlen(source);
    for(i=0;i < length/2;i++)
    {
        help =  source[i];
        source[i] = source[length - 1 -i];
        source[length - 1 -i] = help;
    }
}


