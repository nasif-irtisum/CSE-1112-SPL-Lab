#include <stdio.h>
#include <limits.h>
int main ()
{
    int n; scanf ("%d", &n);
    int arr [n];
    for (int i=0; i<n; i++) scanf ("%d", &arr [i]);

    int mx = INT_MIN, secondMx;

    for (int i=0; i<n; i++) {
        if (arr [i]>mx) {
            secondMx = mx;
            mx = arr [i];
        }
        else if (arr [i]>secondMx)
            secondMx=arr [i];
    }

    printf ("%d\n",secondMx);

    return 0;
}
