#include <stdio.h>
#include <stdlib.h>

/*
18. Napište funkci, která vezme řetězec a každé malé písmeno nahradí příslušným velkým písmenem. Př. A = "Dnes je krasne!", výstup: A = "DNES JE KRASNE!"
18. Write a function that takes a string and replaces each lowercase letter with the corresponding uppercase letter. Ex. A = "Today is beautiful!", Output: A = "TODAY IS BEAUTIFUL!"
*/

void small_to_capital(char str[]);

int main()
{
    char str[40];
    printf("Enter something to the str: ");
    scanf("%39s", str);

    small_to_capital(str);
    puts(str);

    return 0;
}

void small_to_capital(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] += -32;
    }
}

