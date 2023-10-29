#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum =0;



    do{
        printf("Enter the number:");
        scanf("%d",&n);
        sum += n;
    }
    while(sum <= 100);

    printf("that the final value : %d",sum);


return 0;
}
