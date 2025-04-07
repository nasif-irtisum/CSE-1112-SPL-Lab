#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);

    for (int i=n, space = 0; i>= 1; i--, space++) {
        for (int k=1; k<=space; k++) {
            printf (" ");
        }
        for (int j=1; j<=i; j++) {
            printf ("*");
        }
        printf ("\n");

    }
}
