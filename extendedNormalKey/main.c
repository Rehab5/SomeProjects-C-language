#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter character :");
    ch = getch();
    if(ch == -32){
        printf("\nExtended Key \n");
        ch= getch();
        printf("%c = %d",ch,ch);

    }
    else{
        printf("\nNormal Key \n");
        printf("%c = %d",ch,ch);
    }
    printf("\n");
    return 0;
}
