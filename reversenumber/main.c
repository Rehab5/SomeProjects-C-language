#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, remainder = 0, reverse = 0;

    printf("Enter the number :\n");
    scanf("%d",&num);

    while( num!=0){
        remainder = num%10;
        reverse = reverse *10 + remainder;
        num /= 10;
    }
    printf("Reversed number = %d",reverse);
    return 0;
}
