#include <stdio.h>
#include <limits.h>
int main ()
{
    int N;
    printf ("Please enter size: ");
    scanf ("%d",&N);
    int arr [N];

    for (int i=0; i<N; i++) {
        printf ("Index %d: ", i);
        scanf ("%d", &arr [i]);
    }
    printf ("The initial array is as follows:\n");
    {
        for (int i=0; i<N; i++) printf ("%d ", arr [i]);
        printf ("\n");
    }

    int mn = INT_MAX, trackIndex=0;

    for (int i=0; i<N; i++) {
        if (mn>arr[i]) {
            mn = arr [i];
            trackIndex=i;
        }
    }

    for (int i=trackIndex; i<N-1; i++) {
        arr [i] = arr [i+1];
    }
    N--;
    printf ("The array after deletion is as follows:\n");
    {
        for (int i=0; i<N; i++) printf ("%d ", arr [i]);
        printf ("\n");
    }

    //Selection Short Algorithm


    for (int i=0; i<N-1; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr [i]<arr [j]) {
                int tmp = arr [i];
                arr [i] = arr [j];
                arr [j] = tmp;
            }
        }
    }
    printf ("The array after sorting is as follows:\n");
    {
        for (int i=0; i<N; i++) printf ("%d ", arr [i]);
        printf ("\n");
    }

    arr [N] = mn;
    N++;

    printf ("The array after insertion is as follows:\n");
    {
        for (int i=0; i<N; i++) printf ("%d ", arr [i]);
        printf ("\n");
    }
}
