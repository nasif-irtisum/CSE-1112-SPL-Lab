#include <stdio.h>
int sum = 0;
int evenSum (int n)
{
    if (n==0) return 0;

    if (n%2==0) {
        return n+evenSum(n-1);
    }
    evenSum (n-1);
}
int main ()
{
    int n; scanf ("%d", &n);

    printf ("%d\n",evenSum(n));
}
