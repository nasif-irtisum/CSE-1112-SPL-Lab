#include <stdio.h>
int main ()
{
    int number, t, flag=1; scanf ("%d %d", &number, &t);

    while (t--) {
        int num; scanf ("%d", &num);

        if (num==number) {
            printf ("Right, Player-2 wins!\n");
            flag = 0;
            break;
        }
        else printf ("Wrong, %d Choice(s) Left!\n", t);
    }
    if (flag) printf ("Player-1 wins!\n");

    return 0;
}
