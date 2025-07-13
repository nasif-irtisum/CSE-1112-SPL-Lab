#include <stdio.h>
int main ()
{
    FILE *fp;

    char fileName [] = "myData.txt";

    fp = fopen (fileName, "r");

    if (fp==NULL) printf ("NULL\n");
    else printf ("Successfully Opened");

    fclose (fp);
}
