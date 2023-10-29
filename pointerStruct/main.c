#include <stdio.h>
#include <stdlib.h>


struct employee{
    int id;
    char name[50];
    int salary;
};

int main(){

struct employee *emp;
    int number;

    printf("Enter the number of employees: \n");
    scanf("%d", &number);

    //Dynamic allocation
    emp = (struct employee *)malloc(number * sizeof(struct employee ));

    //Take data of employees
    for(int i = 0; i < number; i++){
        printf("Enter the name of employee: \n");
        scanf("%s",(emp->name));
        printf("Enter the ID of employee: \n");
        scanf("%d",&(emp->id));
        printf("Enter the salary of employee: \n");
        scanf("%d",&(emp->salary));
        printf("--------------------------------\n");
    }

    printf("\n******************************************************************\n");
    printf("******************************************************************\n\n");

    //Display the data of employees
    printf(" -The details of the employee -__- .\n\n");

    for (int i = 0; i < number; i++){
        printf(" ID : %d \n",emp->id);
        printf(" Name : %s \n",emp->name);
        printf(" Salary : %d \n",emp->salary);
        printf("--------------------------------\n");
    }

    free(emp);

    return 0;
}
