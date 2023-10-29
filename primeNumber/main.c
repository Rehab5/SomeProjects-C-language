#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("********* Prime Number **********\n");
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    if(n <= 1)
        printf("Number is Not Prime");


    for(int i =2;i<= n/2;i++){
        if(n % i == 0){
            printf("Number is Not Prime");
            return 0;
        }

    }
    printf("Number is Prime");



    return 0;
}
