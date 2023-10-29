#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int *arr = (int *)malloc(size*sizeof(int));

    if(arr != NULL){
        printf("\n********* Enter the data of array ********\n");
    for(int i =0; i<size;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",(arr+i));
        printf("\n");
    }
    printf("\n********* Display the data of array ********\n");
    for(int i =0; i<size;i++){
        printf("%d",*(arr+i));
        printf("\n");
    }
    free(arr);
    }
    return 0;
}
