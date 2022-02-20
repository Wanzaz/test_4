#include <stdio.h>
#include <stdlib.h>

/*
13. Máme slovo: rozdělte je do dvou dalších řetězců podle malých a velkých písmen. př.: A = "Ahoj" , B = "hoj", C = "A".
13. We have the word: divide them into two further strings according to lowercase and uppercase letters. ex: A = "Hello", B = "ello", C = "H".
*/

void separation(char str[], char small[], char capital[]);


int main()
{
    char str[40], small[40], capital[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    separation(str, small, capital);
    puts(capital);
    puts(small);

    return 0;
}

void separation(char str[], char small[], char capital[])
{
    int i, j=0, g=0;
    for(i=0; str[i] ;i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            capital[j] = str[i];
            j++;
        }

        if(str[i] >= 'a' && str[i] <= 'z')
        {
            small[g] = str[i];
            g++;
        }
    }
    small[g] = '\0';
    capital[j] = '\0';
}

