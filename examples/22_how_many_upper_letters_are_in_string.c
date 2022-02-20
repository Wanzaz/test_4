#include <stdio.h>
#include <stdlib.h>

int capital_letter(char str[]);

int main()
{
    char str[40];
    printf("Enter something to the str: ");
    scanf("%39s", str);

    printf("There are %d capital letters", capital_letter(str));

    return 0;
}

int capital_letter(char str[])
{
    int i, quantity=0;
    for(i=0; str[i] ;i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            quantity++;
    }
    return quantity;
}

