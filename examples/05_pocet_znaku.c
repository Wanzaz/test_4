#include <stdio.h>
#include <stdlib.h>

/*5. Napište funkci, která vezme řetězec a znak z a vrátí počet výskytů daného znaku z.*/

int pocet_znaku(char str[], char znaku);

int main()
{
    char str[40];
    printf("Zadej neco do retezce str: ");
    scanf("%39s", str);
    char znak;
    printf("Zadej hledany znak: ");
    scanf("\n%c", &znak);

    printf("\nZnak %c je nalezen %d krat", znak, pocet_znaku(str, znak));

    return 0;
}

int pocet_znaku(char str[], char znak)
{
    int i, pocet=0;
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] == znak)
            pocet++;
    }
    return pocet;
}

