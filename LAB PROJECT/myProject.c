#include <stdio.h>
const float unitCost = 7.68;
struct UserInfo
{
    char name [101], address [101], mobileNo [20];
    float months[12];
    int flag [12];


};
char *getMonth (int n)
{
    if (n==0) return "January"; else if (n==1) return "February";
    else if (n==2) return "March"; else if (n==3) return "April";
    else if (n==4) return "May"; else if (n==5) return "June";
    else if (n==6) return "July"; else if (n==7) return "August";
    else if (n==8) return "September"; else if (n==9) return "October";
    else if (n==6) return "November"; else if (n==7) return "December";
}
int main ()
{
    printf ("*******************************\n");
    printf ("WELCOME TO DESCO BILLING SYSTEM\n");
    printf ("*******************************\n\n");

    struct  UserInfo users [1000];
    int index = 0; // For giving user index

    int choice;
    printf ("1. Add new customer\n");
    printf ("2. Save monthly usage for customer\n");
    printf ("3. Generate bill receipt\n");
    printf ("0. Exit\n\n");

    printf ("Enter your choice: "); scanf ("%d", &choice);
    getchar ();


    while (choice != 0) {

        if ((choice <=0 || choice >=3)) {
            printf ("Wrong input! Try again.\n\n");
            printf ("1. Add new customer\n");
            printf ("2. Save monthly usage for customer\n");
            printf ("3. Generate bill receipt\n");
            printf ("0. Exit\n\n");

            printf ("Enter your choice: "); scanf ("%d", &choice);
            continue;
        }
        if (choice == 1) {
            printf ("\nAdd new customer\n");
            printf ("================\n");
            printf ("Name      : ");
            gets (users[index].name);
            printf ("Address   : ");
            gets (users[index].address);
            printf ("Mobile no : ");
            gets (users[index].mobileNo);

            printf ("\n");
            printf ("Customer added. Serial no. is %d.\n\n", index+1);
            index++;




        }
        else if (choice==2) {
            printf ("Save monthly usage for customer\n");
            printf ("===============================\n\n");

            for (int i=0; i<index; i++) {
                printf ("  %d. %s (Mobile no: %s)\n", i+1, users[i].name, users[i].mobileNo);
            }
            printf ("\n");


            int sl; printf ("Enter customer serial no: "); scanf ("%d", &sl);
            printf ("\n");
            printf ("  1. January                7. July\n");
            printf ("  2. February               8. August\n");
            printf ("  3. March                  9. September\n");
            printf ("  4. April                 10. October\n");
            printf ("  5. May                   11. November\n");
            printf ("  6. June                  12. December\n\n");

            int month; printf ("Enter month: "); scanf ("%d", &month);
            printf ("Enter usage in units: ");
            scanf ("%f", &users[sl-1].months[month-1]);
            printf ("\n");
            printf ("Customer's usage in %s recorded.\n\n", getMonth(month-1));
            users [sl-1].flag[month-1] = 1;
        }
        printf ("1. Add new customer\n");
        printf ("2. Save monthly usage for customer\n");
        printf ("3. Generate bill receipt\n");
        printf ("0. Exit\n\n");
        printf ("Enter your choice: "); scanf ("%d", &choice);
        getchar ();

    }

}
