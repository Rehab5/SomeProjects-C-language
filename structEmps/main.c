#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#define emps 3
struct emp{
    int id;
    char name[50];
    int age;
    int salary;
    int overTime;
    int deduction;
};
int duplecateId( struct emp newEmp[],int size,int id);
int main()
{
    struct emp employee[emps];
    int id=0;
    //Input data

    for(int i = 0;i<emps; i++){
        printf("Enter the data of employee %d\n",i+1);
        printf("Enter employee ID : ");
        scanf("%d",&id);
        if(duplecateId(employee,emps,id)){
           printf("ID is already Existed. Try Again!\n");
           //continue;
        }
        employee[i].id=id;
        printf("\nEnter employee Name : ");
        scanf("%s",employee[i].name);

        printf("\nEnter employee Age : ");
        scanf("%d",&employee[i].age);

        printf("\nEnter employee salary : ");
        scanf("%d",&employee[i].salary);

        printf("\nEnter employee OverTime : ");
        scanf("%d",&employee[i].overTime);

        printf("\nEnter employee Deduction : ");
        scanf("%d",&employee[i].deduction);




        printf("\n--------------------------------------------\n");
    }
    //Display data

    for(int i = 0;i<emps; i++){
        printf("*****************************************\n");
        printf("ID : %d\n",employee[i].id);
        printf("Name : %s\n",employee[i].name);
        printf("Age : %d\n",employee[i].age);

        int totalSalary = employee[i].salary + employee[i].overTime - employee[i].deduction;
        printf("Total Salary : %d\n",totalSalary);
    }



    return 0;
}
int duplecateId(struct emp newEmp[],int size,int id){
        for(int i = 0;i<size;i++){
            if (newEmp[i].id == id) {
                //printf("Employee ID already exists.");
                return 1;
            }
        }
        return 0;
}
