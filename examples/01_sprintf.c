#include <stdio.h>
#include <string.h>

/*
1. Napište funkci, která vezme dva řetězce A a B. Zřetězí je do třetího řetězce C.
1. Write a function that takes two strings A and B. Merge them into the third string C.
*/

void merge(char source[], char source2[], char target[]);

int main(void) {
    char str[20], str2[20], result[40];
    printf("Enter something to str: ");
    scanf("%19s", str);
    printf("Enter something to str2: ");
    scanf("%19s", str2);

    merge(str, str2, result);
    
    return 0;
}

void merge(char source[], char source2[], char target[])
{
    sprintf(target, "The result is: %s %s", source, source2);
    puts(target);
}
