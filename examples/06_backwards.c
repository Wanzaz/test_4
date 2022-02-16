#include <stdio.h>
#include <stdlib.h>

/*
6. Napište funkci, která vezme řetězec a vypíše ho pozpátku.
6. Write a function that takes a string and prints it backwards.
*/

void backwards(char str[]);
int my_strlen(char str[]);

int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    backwards(str);

    return 0;
}

void backwards(char str[])
{
    int i;
    int length = my_strlen(str);
    for(i=length-1;i >= 0;i--)
    {
        printf("%c", str[i]);
    }
}

// you can use the strlen function from string.h library
int my_strlen(char str[])
{
    int n;
    for(n=0; str[n] != '\0';n++)
        ;
    return n;
}

