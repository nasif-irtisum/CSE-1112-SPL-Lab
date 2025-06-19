#include <stdio.h>
int main ()
{
    int i=2;
    int x;
    x =(2,3,4,7);
    x = (++i, i+2);

    printf ("%d",x);
}
