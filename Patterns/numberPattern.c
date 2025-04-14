#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);

    for (int i=1, j=n-1; i<=n; i++, j--) {
        int k;
        for (k=1; k<=i; k++) {
            printf ("%d", k);
        }
        for (int l=1; l<=2*j-1; l++) printf (" ");
        if (k-1==n)k--;
        for (int l = k-1; l>=1; l--) printf ("%d", l);
        printf ("\n");
    }
}
