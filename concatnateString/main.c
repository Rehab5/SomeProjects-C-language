#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname[10];
    char lname[10];
    char fullName[20];

    printf("Enter First name :");
    scanf("%s",fname);

    printf("\nEnter Last name :");
    scanf("%s",lname);

    strcpy(fullName,fname);
    strcat(fullName," ");
    strcat(fullName,lname);


    printf("\n******* Full Name is %s **********\n",fullName);
    return 0;
}
