#include <stdio.h>
#include <limits.h>
struct customerData
{
    char name [101];
    char id [10];
    int times;
    double spentMoney [];

};

int main ()
{
    struct customerData arr[100];
    int best;
    double mn = INT_MIN;
    for (int i=0; i<100; i++) {
        gets (arr[i].name);
        getchar();
        gets (arr[i].id);
        getchar ();
        scanf ("%d", &arr[i].times);
        double sum =0;
        arr[i].spentMoney[arr[i].times];
        for (int j=0; j<arr[i].times; i++) {
            double num;
            scanf ("%lf", &num);
            sum += num;
            arr[i].spentMoney[j]=num;
        }
        if (arr[i].times>=10 && (mn< sum/times)) {
            mn = sum/times;
            best = i;
        }
    }

    printf ("%s", arr[best].name);
}
