#include <stdio.h>
#include <string.h>
int main ()
{
    char str [1000];

    gets(str);

    char ch = getchar();
    int cnt=0;
    if (ch>='a' || ch<='z') {
        for (int i=0; i<strlen(str)-1; i++) {
            if (ch== str[i] || ch-32== str[i]) cnt++;
        }
    }
    else {
        for (int i=0; i<strlen(str)-1; i++) {
            if (ch== str[i] || ch+32== str[i]) cnt++;
        }
    }
    printf ("%d\n", cnt);
}
