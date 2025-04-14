#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++)
    {
        for(j = 1; j <= n; j++)
        {
            int mid = n / 2 + 1;

            if(j == mid || j == mid - (i - 1) || j == mid + (i - 1))
            {
                printf("$");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = 1; i <= n; i++)
    {
        printf("$");
    }
    printf("\n");
    for(i = n / 2; i >= 1; i--)
    {
        for(j = 1; j <= n; j++)
        {
            int mid = n / 2 + 1;

            if(j == mid || j == mid - (i - 1) || j == mid + (i - 1))
            {
                printf("$");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
   }

    return 0;
}
