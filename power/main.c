#include <stdio.h>
#include <stdlib.h>

int power(int x,int y);

int main()
{
    int num,pow;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("\nEnter the power :");
    scanf("%d",&pow);

    printf("The number %d power %d = %d",num,pow,power(num,pow));
    return 0;
}

int power(int x, int y){
        int pow = 1;
        for(int i = 0 ; i<y;i++)
            pow *= x;

        return pow;


}
