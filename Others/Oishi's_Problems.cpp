#include <stdio.h>
const int N = 1e2 + 2;
int main ()
{
    int arr [N]; for (int i=0; i<N; i++) arr [i] = 0;

    int n; scanf ("%d", &n);
    int cnt = 0;

    if (n%3==0 && n%5==0) {
        while (n!=0) {
            arr [cnt] = n%10;

            cnt++; n/=10;

        }

        for (int i=0; i<cnt; i++) {
            if (arr[i]%2==0) printf ("%d",0);
            else printf ("%d", arr [i]);

        }
        printf ("%n");

    }
    else if (n%3==0) {
        while (n>0) {
            printf ("%d", n%10);
            n/=10;
        }
        printf ("%n");
    }
    else if (n%5==0) {
        while (n!=0) {
            arr [cnt] = n%10;

            cnt++; n/=10;

        }
        for (int i=0,j=cnt-1; i<j; i++, j--) {
            int tmp = arr [i];
            arr [i] = arr [j];
            arr [j] = tmp;
        }
        for (int i=0; i<cnt; i++) {
            if (arr[i]%2==0) printf ("%d",0);
            else printf ("%d", arr [i]);

        }
        printf ("%n");
    }
    else printf ("%d\n", n);
    return 0;
}
