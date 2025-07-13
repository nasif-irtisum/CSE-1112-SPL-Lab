#include <stdio.h>
int main ()
{
    int m, n, p; scanf ("%d %d %d", &m, &n, &p);

    int A [m][n], B [n][p], M [m][p];

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf ("%d", &A[i][j]);
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<p; j++) {
            scanf ("%d", &B [i][j]);
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<p; j++) {
            int sum = 0;
            for (int k=0; k<n; k++) {
                sum += A [i][k] * B [k] [j];
            }
            M [i][j]= sum;
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<p; j++) {
            printf ("%d ", M [i][j]);
        }
        printf ("\n");
    }
    return 0;
}
