#include <stdio.h>
int main ()
{
    FILE *fp = fopen("sample.txt", "r");
    int arr [100], index = 0, num;
    char str[101];
    while (fscanf(fp,"%d %s", &num, &str)==2) {
        arr [index] = num;
        index++;
        puts (str);
    }
    fclose (fp);

    fp = fopen ("sampleout.txt", "w");

    for (int i=0; i<index; i++) {
        if (arr [i]%2!=0) continue;
        fprintf (fp,"%d\n", arr[i]);
    }
    fclose(fp);

    char myName [100] = "Hello I am a Programmer";
    myName [5] = '\0';
    printf ("%c\n", myName[9]);
    printf ("%d\n", strlen(myName));
    puts (&myName[9]);
}
