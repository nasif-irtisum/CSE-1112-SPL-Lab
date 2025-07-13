#include <stdio.h>
#include <math.h>
int main ()
{
    char str[101];
    scanf ("%[^\n]s", str);

    double num1 = 0, num2 = 0;
    int i;
    int flag = 0;
    int index=1;
    for (i=0; !(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='%'); i++) {
        int tmp = str [i] - '0';
        if (str [i]=='.') {
            flag = 1;
            continue;
        }
        if (flag) {
            num1 = num1 + tmp/pow(10, index);
            index++;
            continue;
        }
        num1 = (num1*10)+tmp;
    }


    char op= str [i];
    flag = 0, index = 1;
    for (i++; str [i]!='\0'; i++) {
        int tmp = str [i] - '0';
        if (str [i]=='.') {
            flag = 1;
            continue;
        }
        if (flag) {
            num2 = num2 + tmp/pow(10, index);
            index++;
            continue;
        }
        num2 = (num2*10)+tmp;
    }
    float result;

    if (op=='+') result = num1 + num2;
    else if (op=='-') result = num1-num2;
    else if (op=='*') result = num1*num2;
    else if (op=='/') {
        if (num2==0) printf ("NOT DIVISIBLE BY ZERO\n");
        else result = num1/num2;
    }
    else if (op=='%') {
        if (num2==0) printf ("NOT DIVISIBLE BY ZERO\n");
        result = fmod(num1,num2);
    }

    if (result-(int)result==0) {
        int res = (int) result;
        printf ("%d", res);
    }
    else printf ("%lf\n", result);

    return 0;
}
