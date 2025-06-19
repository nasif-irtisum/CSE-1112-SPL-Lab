#include <stdio.h>
int main ()
{
    char ch; ch = getchar();

    if (ch>='A' && ch<='Z') ch += 'a'-'A';
    else if (ch>='a' && ch<='z') ch -= 'a'-'A';

    printf ("%c", ch);
}
