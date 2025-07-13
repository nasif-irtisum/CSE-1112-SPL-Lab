#include <stdio.h>
int main ()
{
    FILE *fp = fopen ("myFile2.txt", "r");

    while (1)
    {
        char ch = fgetc (fp);

        if (ch!= EOF) printf ("%c",ch);
        else break;
    }
}
