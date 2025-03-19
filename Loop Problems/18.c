#include <stdio.h>
int main ()
{
    int num; scanf ("%d", &num);

    int tmp = num;
    int sum = 0;
    while (tmp != 0) {
        int rem = tmp%10;
        sum = sum*10+rem;
        tmp /= 10;
    }
    if (sum==num) printf ("YES\n");
    else printf ("NO\n");
}
