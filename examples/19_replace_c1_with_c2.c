#include <stdio.h>
#include <stdlib.h>

/*
19. Napište funkci, která vezme øetìzec a dva znaky z1 a z2. Všechny znaky z1 v øetìzci zamìní za znaky z2.
19. Write a function that takes a string and two characters from c1 and c2. Replaces all c1 characters in the string with c2 characters.
*/

void replace_c1_with_c2(char str[], char c1, char c2);

int main()
{
    char str[40], character1='a', character2='1';
    printf("Enter something to str: ");
    scanf("%39s", str);
    /*
    printf("Enter first character: ");
    scanf("%c", character1);
    printf("Enter the second character that will replace the first one: ");
    scanf("%c", character2);*/

    replace_c1_with_c2(str, character1, character2);
    puts(str);

    return 0;
}

void replace_c1_with_c2(char str[], char c1, char c2)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]==c1)
            str[i] = c2;
    }
}

