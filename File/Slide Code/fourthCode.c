#include <stdio.h>
int main ()
{
    FILE *fp = fopen ("myFile2.txt", "a");

    while (1)
    {
        char ch = getchar();

        if (ch!= 'X') fputc(ch,fp);
        else break;
    }
    fclose (fp);
}
