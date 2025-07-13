#include <stdio.h>
int main ()
{
    FILE *fp = fopen ("myFile.txt", "r");

    char a = fgetc(fp);
    char b = fgetc(fp);
    char c= fgetc(fp);
    char d = fgetc(fp);

    printf ("Characters:\n");

    printf ("a=%c\n",a);
    printf ("b=%c\n",b);
    printf ("c=%c\n",c);
    printf ("d=%c\n",d);
}
