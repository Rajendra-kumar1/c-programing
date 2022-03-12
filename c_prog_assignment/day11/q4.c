//Write a program to read and print an Employee’s details using Structure.Use array of structures and pointer to the array of structures concepts.

#include <stdio.h>
 
  //structure declaration
struct employee
{
    char name[30];
    int empId;
    float salary;
    
};
 
int main()
{
         //declare structure variable
    struct employee emp;
    struct employee *pemp;
    
    pemp = &emp;
     
        //read employee details
    printf("\nEnter details :\n");
    printf("Name :"); 
    gets(pemp->name);
    printf("ID :");    
    scanf("%d",&pemp->empId);
    printf("Salary :");     
    scanf("%f",&pemp->salary);
    
     
    //print employee details
    printf("\nEntered detail is:\n");
    printf("Name: %s\n",pemp->name);
    printf("Id: %d\n",pemp->empId);
    printf("Salary: %f\n",pemp->salary);
    
    return 0;
}
