#include <stdio.h>
int main ()
{
    int a=1,b=1, n; scanf ("%d", &n);

    for (int i=1;i<=n; i++) {
        if (i==1) {
            if (n>1) continue;
            printf ("%d\n",a);
            if (n==1)break;
        }
        else if (i==2) {
            if (n==2) {
                printf ("%d %d\n",a,b);
                break;
            }
            printf ("%d %d ",a,b);

        }
        else {
            int sum = a+b;
            if (n==i) printf ("%d\n", sum);
            else printf ("%d ", sum);
            a = b;
            b = sum;
        }
    }
}
