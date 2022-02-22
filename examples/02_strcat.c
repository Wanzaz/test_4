#include <stdio.h>
#include <string.h>

/*
2. Napište funkci, která vezme dva řetězce A a B a zřetězí je, ale do A.
2. Write a function that takes two strings A and B and concatenates them, but into A.
*/

void merge(char source[], char source2[]);

int main(void) {
    char str[40], str2[20];
    printf("Enter something to str: ");
    scanf("%19s", str);
    printf("Enter something to str2: ");
    scanf("%19s", str2);

    merge(str, str2);
    puts(str);
    
    return 0;
}

void merge(char source[], char source2[])
{
    strcat(source, source2);
}
