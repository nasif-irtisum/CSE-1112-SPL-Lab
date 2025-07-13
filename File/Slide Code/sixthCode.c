#include <stdio.h>
int main ()
{
    FILE *fp = fopen ("Numbers.txt", "r");

    if (fp==NULL) printf ("NULL");
    int num, sum = 0;
    char str [10];
    while (fscanf(fp,"%d %s", &num, str)==2) {
        printf ("%s\n", str);
        sum += num;
    }
    fclose (fp);
    printf ("%d\n", sum);

    fp = fopen ("Numbers.txt", "a");

    fprintf (fp, "\n%d", sum);

    fclose (fp);
}
