#include <stdio.h>
#include <limits.h>
int main ()
{
    FILE *fp = fopen ("in.txt","r");

    int num, mx = INT_MIN;

    while (fscanf(fp,"%d", &num)==1) {
        if (mx<num) mx=num;
    }

    fclose (fp);

    fp = fopen ("out.txt", "w");

    fprintf (fp,"%d\n",mx);
}
