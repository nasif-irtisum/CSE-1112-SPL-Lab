#include <stdio.h>
int main ()
{
    int n, r; scanf ("%d %d", &n, &r);

    long long N=1, R=1, diff=1;

    if (n==0) N=1;
    else for (int i= 1; i<=n; i++) N *= i;

    if (r==0) R=1;
    else for (int i=1; i<=r; i++) R *= i;

    if (n-r == 0) diff=1;
    else for(int i=1; i<=n-r; i++) diff *= i;

    printf ("%d\n", N/(R*diff));
}
