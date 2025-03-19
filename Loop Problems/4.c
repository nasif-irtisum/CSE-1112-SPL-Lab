#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);

    if (n==1) {
        double num; scanf("%lf", &num);
        printf ("AVG of 1 input: %lf\n", num);
        return 0;
    }

    double sum=0;
    for (int i=1; i<=n; i++) {
        double num; scanf ("%lf", &num);
        sum += num;
    }

    printf ("AVG of %d inputs: %lf\n",n, sum/n);

    return 0;
}
