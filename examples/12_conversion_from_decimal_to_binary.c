#include <stdio.h>
#include <stdlib.h>

/*
12. Napište funkci, která vezme celé číslo a řetězec a do řetězce vloží to číslo převedené do dvojkové soustavy.
12. Write a function that takes an integer and a string and inserts the number converted to the binary system into the string.
*/

int my_strlen(char str[]);
void insert_at_the_beginning(char str[],char character);
void convert(int num, char str[]);

int main()
{
    char str[40], num;
    printf("What number do you wanna convert to binary: ");
    scanf("%d", &num);

    convert(num, str);
    puts(str);

    return 0;
}

// you can use the strlen function from string.h library
int my_strlen(char str[])
{
    int n;
    for(n=0; str[n] != '\0';n++)
        ;
    return n;
}


void insert_at_the_beginning(char str[],char character)
{
    int end = my_strlen(str);
    int i;
    for(i=end; i >= 0; i--)
        str[i + 1] = str[i];
    str[0] = character;
}


// conversion from decimal system to binary
void convert(int num, char str[])
{
    int end = my_strlen(str);
    str[end] = '\0';

    while(num > 0)
    {
        int rest = num % 2;

        if(rest==0)
            insert_at_the_beginning(str, '0');
        else
            insert_at_the_beginning(str, '1');

        num = num / 2;
    }
}



