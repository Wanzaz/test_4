#include <stdio.h>
#include <stdlib.h>

/*
24. Napište funkci, která vyplní řetězec dvěma znaky takto: a) aaabbb, b) ababab, c) abbabbabb. Funkce bude mít parametr n, který udává počet sekvencí.
24. Write a function that fills a string with two characters as follows: a) aaabbb, b) ababab, c) abbabbabb. The function will have a parameter n, which specifies the number of sequences.
*/

void two_halves(char str[], int n);
void cross(char str[], int n);
void abb(char str[], int n);

int main()
{
    char str[40];
    //printf("Enter something to str: ");
    //scanf("%39s", str);

    int n;
    printf("How many 'a' and 'b' should be there: ");
    scanf("%d", &n);

    //aaabbb
    two_halves(str,n);
    puts(str);

    //ababab
    cross(str,n);
    puts(str);

    //abbabb
    abb(str,n);
    puts(str);

    return 0;
}

void two_halves(char str[], int n) // aaabbb
{
    for (int i = 0; i < n; i++)
    {
        str[i] = 'a';
        str[i + n] = 'b';
    }

    str[n*2] = '\0';
}

void cross(char str[], int n) //abab
{
    int i;
    for(i=0;i < n*2;i++)
    {
        if(i%2==0) str[i] = 'a';
        else str[i] = 'b';
    }
    str[i+1] = '\0';
}

void abb(char str[], int n) //abbabb
{
    int i;
    for(i=0;i < n*3; i =i + 3)
    {
        str[i] = 'a';
        str[i + 1] = 'b';
        str[i + 2] = 'b';
    }
    str[n*3] = '\0';
}

