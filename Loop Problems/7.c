#include <stdio.h>
int main ()
{
    int cnt =1;
    char ch;
    while(1) {
        scanf ("%c", &ch);
        getchar();
        if (ch==65) {
            break;
        }
        printf ("Input %d: %c\n", cnt, ch);
        cnt++;

    }
}
