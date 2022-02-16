#include <stdio.h>
#include <stdlib.h>

/*2. Napište funkci, která vezme dva øetìzce A a B a zøetìzí je, ale do A.*/


// muzeme pouzit knihovnnu string a strlen() funkci
int delka_retezce(char str[])
{
    int n;
    for(n=0; str[n] != '\0';n++)
        ;
    return n;
}

//zadejte jen string bez mezer protoze je chyba v scanf
void slouceni(char a[], char b[])
{
    int i, j=0;
    i = delka_retezce(a);

    /*while(a[i] != '\0')
    {
        a[i] = a[i];
        i++;
    }*/

    while(b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';
}

int main()
{
    char a[40], b[20];
    printf("Zadej neco do retezce a: ");
    scanf("%19s", a);
    printf("Zadej neco do retezce b: ");
    scanf("%19s", b);

    slouceni(a, b);
    puts(a);

    return 0;
}

