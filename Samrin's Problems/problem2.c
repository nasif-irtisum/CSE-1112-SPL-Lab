#include <stdio.h>
#include <math.h>
int main ()
{
    int n; scanf ("%d", &n);

    float div = (float)n/(float)3;
    int cnt =0;

    float num = div-n/3;

    if (num>=.50) cnt = ceil (div);
    else cnt = floor (div);


    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n;j++) {
            if (i==1 || j==n || (i>n/2 && j<=cnt)) printf ("$");

            else printf ("*");

        }
        printf ("\n");
    }
    return 0;
}
