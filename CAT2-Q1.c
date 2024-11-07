//A programme to define a structure of employee
//Reg No  :CT1O1/G/23880/24



#include <stdio.h>
#include <string.h>

struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}employee1;


int main(int argc, char** argv)
{
	strcpy(employee1.name,"John Doe");
	printf("Name:%s\n",employee1.name);
	
	employee1.id=12345;
	
	printf("ID:%d\n",employee1.id);
	
	strcpy(employee1.department,"Human Resources");
	printf("Department:%s\n",employee1.department);
	
	employee1.salary=55000.50;
	printf("The salary is:%2.f\n",employee1.salary);
	
	strcpy(employee1.email,"john doe@company.com");
	printf("Email:%s\n",employee1.email);
	return 0;
}