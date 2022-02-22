#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
7. Napište funkci, která vezme dva řetězce A a B (jeden vstupní a druhý výstupní) a do výstupního řetězce (který je 2× delší než vstupní ) vloží znaky z prvního řetězce takto:  a) A=“ahoj“ B=“ahojahoj“ , b) B=“ahojjoha“
7. Write a function that takes two strings A and B (one input and the other output) and inserts the characters from the first string into the output string (which is 2x longer than the input) as follows: a) A = "hello" B = "hellohello", B) B =" helloolleh"
*/

void two_same(char *str, char *str2);
void normal_and_reverse(char *str, char *str2);
void reverse(char *source, char *target);

int main()
{
    char str[20], str2[40];
    printf("Enter something to the str: ");
    scanf("%19s", str);

    two_same(str, str2);
    puts(str);

    char str_reverse[20];

    normal_and_reverse(str2, str_reverse);
    puts(str2);

    return 0;
}

void two_same(char *str, char *str2)
{
    strcpy(str2, str);
    strcat(str, str2);
}

void normal_and_reverse(char *str, char *str2)
{
    reverse(str, str2);
    strcat(str, str2);
}

void reverse(char *source, char *target)
{
    int i;
    int length = strlen(source);
    for(i=0;i <= length;i++)
    {
        target[i] = source[length - 1 - i];
    }
    target[i] = '\0';
}

