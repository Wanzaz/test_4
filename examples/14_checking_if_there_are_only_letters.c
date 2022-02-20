#include <stdio.h>
#include <stdlib.h>

/*
14. Napište funkci, která vezme řetězec a vrátí 1, pokud se řetězec skládá jen z písmen nebo vrátí 0 pokud ne.
14. Write a function that takes a string and returns 1 if the string consists of only letters, or returns 0 if not.
*/

int checking_letters(char str[]);

int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    if(checking_letters(str) == 1)
        printf("String contains only letters");
    else
        printf("String contains also something else than letters");

    return 0;
}

int checking_letters(char str[])
{
    int i;
    for(i=0; str[i] ;i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
            {;}
        else
            return 0;
    }
    return 1;
}

