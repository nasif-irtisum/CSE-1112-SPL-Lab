#include <stdio.h>
int main ()
{
    int t; scanf ("%d", &t);

    int number = 1;

    while (t--) {
        if (t==0) printf ("%d\n", number);
        else printf ("%d, ", number);
        number += 2;
    }

    return 0;
}
