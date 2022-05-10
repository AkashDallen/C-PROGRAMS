#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[30];
    int id;
    double salary;
    char design[30];
    char dateofjoin[30];
} Employee;
 
int main()
{	
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("- - - - - - - E M P L O Y E E   D E T A I L S - - - - - - -\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    int n;
    char temp;
    float avg;
    int sum = 0;
    //number of employees
    printf("--------------------------------------\n");
    printf("Enter number of employees : ");
    scanf("%d",&n);
    printf("--------------------------------------\n\n");

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("-----------------------------------\n");
    printf("Enter %d Employee Details\n",n);
    printf("-----------------------------------");
    for(int i=0; i<n; i++){
        printf("\n\n->Employee %d: \n\n",i+1);

        //Name
        printf("Name         : ");
	scanf("%c",&temp);
        scanf("%[^\n]",employees[i].name);

        //ID
        printf("Id           : ");
        scanf("%d",&employees[i].id);

        //Salary
        printf("Salary       : ");
        scanf("%lf",&employees[i].salary);

	//designation
	printf("Designation  : ");
	scanf("%c",&temp);
	scanf("%[^\n]",employees[i].design);

	//date of join
	printf("Date of Join : ");
	scanf("%c",&temp);
	scanf("%[^\n]",employees[i].dateofjoin);
	printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name         : ");
        printf("%s \n",employees[i].name);
 
        printf("Id           : ");
        printf("%d \n",employees[i].id);
 
        printf("Salary       : ");
        printf("%.2lf \n",employees[i].salary);

	printf("Designation  : ");
        printf("%s\n",employees[i].design);

	printf("Date of join : ");
        printf("%s \n",employees[i].dateofjoin);

	sum = sum + employees[i].salary;
 	avg = sum/n;
        printf("\n");
    }

    //salary more than average salary
    for(int i=0; i<n; i++)
    {
	if(employees[i].salary >= avg)
	{
		printf("%s has salary more than %.2f",employees[i].name,avg);
		printf("\n");
	}
    }
    return 0;
}
