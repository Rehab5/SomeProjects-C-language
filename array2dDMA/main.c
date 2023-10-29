#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("************** Array two D **************\n");
    int rows, cols;



    printf("Enter numbers of rows : ");
    scanf("%d",&rows);
    printf("Enter numbers of cols : ");
    scanf("%d",&cols);

    int** arr = (int**) malloc(rows*sizeof(int *));

    for(int i = 0;i<rows; i++){
        arr[i]=(int*)malloc(cols*sizeof(int));
    }
    //Enter element
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
return 0;
}
