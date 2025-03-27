#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);
    int arr [n];

    for (int i=0; i<n; i++) scanf ("%d", &arr [i]);

    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr [i] > arr [j]) {
                int tmp = arr [j];
                arr [j] = arr [i];
                arr [i] = tmp;

            }
        }
    }
    for (int i=0; i<n; i++) {
        if (i+1==n) printf ("%d\n", arr [i]);
        else printf ("%d ", arr [i]);
    }

    return 0;
}
