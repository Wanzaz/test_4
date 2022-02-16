#include <stdio.h>
#include <stdlib.h>

/*3. Napište funkci, která vezme řetězec a vypíše ho tak, že každý znak zdvojí. Př. A = "Ahoj", výstup: AAhhoojj.*/

void zdvojeni(char str[]);

int main()
{
    char str[40];
    printf("Zadej neco do retezce str: ");
    scanf("%39s", str);

    zdvojeni(str);

    return 0;
}

void zdvojeni(char str[])
{
    int i;
    for(i=0;str[i] != '\0';i++)
    {
        printf("%c%c",str[i], str[i]);
    }
}

