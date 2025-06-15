#include <stdio.h>
int getPower (int x, int y)
{
    int res = 1;

    for (int i=1; i<=y; i++) res *= x;

    return res;

}

int main ()
{
    int x, y; scanf ("%d %d", &x, &y);

    printf ("%d to the power of %d is %d\n", x, y, getPower(x,y));
}
