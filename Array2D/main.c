#include <stdio.h>
#include <stdlib.h>
#define cols 3
#define rows 2
int main()
{
    printf("************** Array two D **************\n");

    int arr[rows][cols];
    int sum[rows]={0},summ[cols]={0};
    int average[cols]={0};

    for(int i = 0;i<rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Enter element [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
            printf("\n");
        }
    }

    //Display Array
    for(int i = 0;i<rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d \t",arr[i][j]);

        }
        printf("\n");
    }

    printf("************************************************\n");

    //Sum rows
    for(int i = 0;i<rows; i++){
        for(int j = 0; j < cols; j++){
                sum[i] +=arr[i][j];
        }
        printf("Sum of Row %d = %d \n",i+1,sum[i]);
    }
    printf("************************************************\n");
    //Average Each Col
    for(int j = 0;j<cols; j++){
        for(int i = 0; i < rows; i++){
                summ[j] +=arr[i][j];
        }
        printf("Sum of col %d = %d \n",j+1,summ[j]);
    }
    printf("\t\t-------------------------\n");
    for(int j = 0;j<cols; j++){
        for(int i = 0; i < rows; i++){
                average[j]=summ[j]/rows;
        }
        printf("Average of col %d = %d \n",j+1,average[j]);
    }

    printf("************************************************\n");


    return 0;
}
