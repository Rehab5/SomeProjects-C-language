#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    printf("************** Array one D **************\n");

    int arr[size]={0};
    int sum = 0;
    int max , min;

    for(int i = 0;i < size; i++){
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }

    //Display Array
    for(int i = 0;i < size; i++){
        printf(" %d ",arr[i]);
        printf("\n");
    }

    printf("************************************************\n");

    //Sum Array
    for(int i = 0;i < size; i++){
        sum += arr[i];
    }
    printf("Sum Of array = %d\n",sum);

    printf("************************************************\n");

    //Max Min
    max = arr[0];
    min = arr[0];


    for(int i = 1; i < size;i++){
        if(max <arr[i])
            max = arr[i];
        else if(min >arr[i])
            min =arr[i];
    }
    printf("Maximum Element : %d\n",max);
    printf("Minimum Element : %d\n",min);

    printf("************************************************\n");

    //Target





    return 0;
}
