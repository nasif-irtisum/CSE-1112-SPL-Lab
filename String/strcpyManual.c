#include <stdio.h>
const int N = 1001;
int main ()
{
    char str1 [N], str2 [N];

    scanf ("%[^\n]s", str1);
    int i=0;

    while (str1[i]) {
        str2 [i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf ("%s\n", str2);
}
