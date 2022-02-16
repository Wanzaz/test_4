#include <stdio.h>
#include <stdlib.h>

/*4. Napište funkci , která vezme řetězec a vytiskne z něj podřetězec, který určíte pomocí parametru a) pozice, od které se má tisknout, b) počet znaků.*/

void tisk_od_pozice_do_konce(char str[], int parametr);

int main()
{
    char str[40];
    printf("Zadej neco do retezce str: ");
    scanf("%39s", str);
    int parametr;
    printf("Zadej parametr: ");
    scanf("%d", &parametr);


    tisk_od_pozice_do_konce(str, parametr);

    return 0;
}

void tisk_od_pozice_do_konce(char str[], int parametr)
{
    int i;
    for(i=parametr;str[i] != '\0';i++)
    {
        printf("%c",str[i]);
    }
}

