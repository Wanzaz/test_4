#include <stdio.h>
#include <stdlib.h>

/*1. Napište funkci, která vezme dva řetězce A a B. Zřetězí je do třetího řetězce C.*/

void slouceni(char a[], char b[], char c[])
{
    int i=0, j=0;

    while(a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }

    while(b[j] != '\0')
    {
        c[i] = b[j];
        i++;
        j++;
    }

    c[i] = '\0';
}

int main()
{
    char a[20], b[20], c[40];
    printf("Zadej neco do retezce a: ");
    scanf("%19s", a);
    printf("Zadej neco do retezce b: ");
    scanf("%19s", b);

    slouceni(a, b, c);
    puts(c);

    return 0;
}

