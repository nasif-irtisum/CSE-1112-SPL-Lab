#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);

    int mat [n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++){
            scanf ("%d", &mat[i][j]);

        }
    }
    int flag =1;
    for (int i=0; i<n; i++) {
        if (mat[0][i]!=mat[i][0]){
            flag=0;
            break;
        }
    }
    if (flag) printf ("Yes");
    else printf ("No");
}
