#include <stdio.h>

typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;
 
void main()
{
    int n=2;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++)
    {
        printf("Employee %d: \n",i+1);
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        printf("Id: ");
        scanf("%d",&employees[i].id);

        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();
        printf("\n");
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+employees[i].salary;
    }
    int avg=sum/n;
    printf("Average Salary is: %d",avg);

    printf("\nEmployees Details\n");
    for(int i=0; i<n; i++)
    {
        if(employees[i].salary>=avg)
        {
            printf("Name \t: ");
            printf("%s \n",employees[i].name);
    
            printf("Id \t: ");
            printf("%d \n",employees[i].id);
    
            printf("Salary \t: ");
            printf("%.2lf \n",employees[i].salary);
    
            printf("\n");
        }
    }
}
