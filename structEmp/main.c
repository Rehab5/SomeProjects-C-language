#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp{
    int id;
    char name[50];
    int age;
    int salary;
    int overTime;
    int deduction;
};
int main()
{
    struct emp employee;
    printf("******** Data of Employee *********\n");

    //Input data
    printf("Enter employee ID : ");
    scanf("%d",&employee.id);

    printf("\nEnter employee Name : ");
    scanf("%s",employee.name);

    printf("\nEnter employee Age : ");
    scanf("%d",&employee.age);

    printf("\nEnter employee salary : ");
    scanf("%d",&employee.salary);

    printf("\nEnter employee OverTime : ");
    scanf("%d",&employee.overTime);

    printf("\nEnter employee Deduction : ");
    scanf("%d",&employee.deduction);

    //Display Data
    printf("*****************************************\n");
    printf("ID : %d\n",employee.id);
    printf("Name : %s\n",employee.name);
    printf("Age : %d\n",employee.age);

    int totalSalary = employee.salary + employee.overTime - employee.deduction;
    printf("Total Salary : %d\n",totalSalary);



    return 0;
}
