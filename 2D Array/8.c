#include <stdio.h>
#include <limits.h>
int main ()
{
    int m, n; scanf ("%d%d", &m, &n);

    int mat [m] [n];

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf ("%d", &mat[i][j]);
        }
    }
    int maxValue = INT_MIN, locI, locJ;


    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (mat[i][j]> maxValue) {
                maxValue=mat [i][j];
                locI=i, locJ=j;
            }
        }
    }
    printf ("Max: %d\n", maxValue);
    printf ("Location: [%d][%d]\n", locI,locJ);

}
