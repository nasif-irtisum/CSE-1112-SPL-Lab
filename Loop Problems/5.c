#include <stdio.h>
int main ()
{
    int x, y; scanf ("%d %d", &x, &y);

    if (x<y) {
        while (1) {
            if (x*x==y*y) {
                printf ("Reached\n");
                break;
            }
            else {
                printf ("%d ", x*x);
                x++;
            }
        }
    }

    else {
        for (int a = x; a>=y; a--) {
            if (a==y) {
                printf ("Reached\n");
                break;
            }
            printf ("%d ", a*a);
        }
    }
}
