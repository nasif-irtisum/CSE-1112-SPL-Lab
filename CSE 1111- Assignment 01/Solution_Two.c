#include <stdio.h>
int main ()
{
    for(int i=1,j=1; i<8; j+=2,i++)
    {
        int n =i+j;
        for(n=n+2; n<12;)
        {
            n++;
            printf("i=%d,j=%d and n=%d\n",i,j,n);
        }
    }

    printf ("===================================\n");

    int i=1,j=1;

    while (i<8) {
        int n = i+j+2;
        while (n<12) {
            n++;
            printf("i=%d,j=%d and n=%d\n",i,j,n);
        }
        i++; j+=2;
    }



}
