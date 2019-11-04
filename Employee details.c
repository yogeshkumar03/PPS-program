#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}

Output:

Enter details :
Name ?:Yogesh
ID ?:1914122
Salary ?:20,0000

Entered detail is:Name: YogeshId: 1914122Salary: 20,0000
