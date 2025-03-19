#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);

    for (int i=1; i<=n; i++) {
        int printValue = (i%2==1)?1:0;

        if (i==n) printf ("%d\n", printValue);
        else printf ("%d, ", printValue);
    }
}
