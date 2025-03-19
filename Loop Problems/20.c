#include <stdio.h>
int main ()
{
    int sum=0,n, finalSum=0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        sum = sum * 10 + i;
        finalSum += sum;

    }

    printf ("%d\n", finalSum);
}
