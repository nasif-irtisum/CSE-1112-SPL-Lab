#include <stdio.h>
int main ()
{
    int a,b; scanf ("%d %d", &a, &b);
    int value1 = a, value2 = b;
    while (b!=0) {
        int rem = a%b;
        a = b;
        b = rem;

    }
    printf ("GCD: %d\n", a);
    printf ("LCM: %d\n",(value1*value2)/a);
}
