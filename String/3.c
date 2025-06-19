#include <stdio.h>
#include <string.h>
char str [1001];
int main ()
{
    gets (str);
    int cnt = 0;
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i]=='a' || str[i]=='e' || str [i]=='o' || str[i]=='i' || str[i]== 'u' || str[i]=='A' || str[i]=='E' || str [i]=='I' || str[i]=='O' || str[i]== 'U') cnt++;
    }
    printf ("%d\n", cnt);
}
