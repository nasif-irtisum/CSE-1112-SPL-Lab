#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=(n-i)*2; j++) {
            printf (" ");
        }
        for (int k = 1, l = 1; k<=i; k++, l+=2) {
            printf ("%d ", l);
            if (l>=5) l = -1;
        }
        printf ("\n");
    }
    return 0;
}
