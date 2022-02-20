#include <stdio.h>
#include <stdlib.h>

/*
17. Napište funkci, která vezme řetězec a vytiskne ho tak, že všechna malá písmena vytiskne dvakrát. Ahoj -> Ahhoojj
17. Write a function that takes a string and prints it by printing all lowercase letters twice. Hello -> Heelllloo
*/

void double_small(char str[]);

int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    puts(str);
    double_small(str);

    return 0;
}

void double_small(char str[])
{
    int i;
    for(i=0; str[i] ;i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            printf("%c%c", str[i], str[i]);
        else
            printf("%c", str[i]);
    }
}

