#include <stdio.h>

void updateBalance (float arr[],int id, int type, float amount)
{
    if (type ==1 ) {
        if (arr[id]-amount<0) {
            printf ("Not Sufficient Balance.\n");
            return;
        }
        arr[id]-=amount;
        printf ("Updated Balance.");
    }
    else if (type==2) {
        arr[id]+=amount;
        printf ("Updated Balance");
    }
    return;
}

int main ()
{
    float initBalance [100];
    for (int i=0; i<100; i++) scanf ("%f", &initBalance [i]);
    int id, type; float amount;
    scanf ("%d %d %f", &id, &type, &amount);
    updateBalance (initBalance, id, type, amount);
}
