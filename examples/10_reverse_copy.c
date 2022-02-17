#include <stdio.h>
#include <stdlib.h>

/*
10. Napište funkci, která vezme dva řetězce a zkopíruje první řetězec do druhého, ale v opačném pořadí. KONEC -> CENOK
10. Write a function that takes two strings and copies the first string to the second, but in reverse order. END -> DNE
*/


//more effective solution
void reverse_copy(char *source, char *target);
int my_strlen(char *str);

int main()
{
    char str[40], str2[40];
    printf("Enter something to the str: ");
    scanf("%39s", str);

    reverse_copy(str, str2);
    puts(str2);

    return 0;
}

void reverse_copy(char *source, char *target)
{
    int i;
    int length = my_strlen(source);
    for(i=0;i <= length;i++)
    {
        target[i] = source[length - 1 - i];
    }
    target[i] = '\0';
}

// you can use the strlen function from string.h library
int my_strlen(char *str)
{
    int n;
    for(n=0; str[n] != '\0';n++)
        ;
    return n;
}


/*
#include <stdio.h>
#include <stdlib.h>

10. Napište funkci, která vezme dva řetězce a zkopíruje první řetězec do druhého, ale v opačném pořadí. KONEC -> CENOK
10. Write a function that takes two strings and copies the first string to the second, but in reverse order. END -> DNE


void reverse_copy(char *source, char *target);
int my_strlen(char *str);

int main()
{
    char str[40], str2[40];
    printf("Enter something to the str: ");
    scanf("%39s", str);

    reverse_copy(str, str2);
    puts(str2);

    return 0;
}

void reverse_copy(char *source, char *target)
{
    int i, j=0;
    int length = my_strlen(source);
    for(i=length-1;i >= 0;i--)
    {
        target[j] = source[i];
        j++;
    }
    target[length] = '\0';
}

// you can use the strlen function from string.h library
int my_strlen(char *str)
{
    int n;
    for(n=0; str[n] != '\0';n++)
        ;
    return n;
}
*/
