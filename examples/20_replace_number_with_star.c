#include <stdio.h>
#include <stdlib.h>

/*
20. Napište funkci, která vezme řetězec a nahradí v něm všechny číslice hvězdičkou.
20. Write a function that takes a string and replaces all digits with a star.
*/

void replace_number_with_star(char str[]);

int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    replace_number_with_star(str);
    puts(str);

    return 0;
}

/*if(ch >= 48 && ch <= 57)
      printf("Number");*/

void replace_number_with_star(char str[])
{
    int i;
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            str[i] = '*';
        }
    }
}

