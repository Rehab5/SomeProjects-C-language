#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("******* Simple Menu ********\n");

    char option;
    int flag =0;



    do{
        printf("New\nDisplay\nExit\n\n");
        option = getch();
        switch(option){
        case 'n':
        case 'N':
            printf("New selected\n\n");
            getch();
            break;
        case 'd':
        case 'D':
            printf("Display selected\n\n");
            getch();
            break;
        case 'e':
        case 'E':
            printf("Exit selected\n");
            flag = 1;
            break;
        case 27:
            printf("No option");
            flag = 1;
            break;

    }

    }
    while(flag == 0);
    return 0;
}
