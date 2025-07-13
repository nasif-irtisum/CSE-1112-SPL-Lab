#include <stdio.h>
int main ()
{
    FILE *fp = fopen ("myFile2.txt", "r");

    while (1)
    {
        char arr [100];


        if (fgets (arr,10,fp)!= NULL) printf ("%s\n",arr);
        else break;
    }
}
