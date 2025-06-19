#include <stdio.h>
#include <string.h>
char str [1000];
int main ()
{
    gets (str);
    int flag = 1;

    for (int i=0, j= strlen(str)-1; i<j; i++, j--) {
        if (str [i] != str [j]) {
            flag = 0;
            break;
        }
    }
    if (flag) printf ("Yes\n");
    else printf("No\n");
}
