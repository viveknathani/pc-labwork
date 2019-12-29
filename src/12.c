//write a real life example for structures

#include<stdio.h>

struct employeeDetails
{
  int id, salary;
  char name[10], designation[20], department[20];
}object;

void getData()
{
  printf("Enter id: ");
  scanf("%d", &object.id);
  printf("Enter salary: ");
  scanf("%d", &object.salary);
  fflush(stdin);
  printf("Enter name: ");
  gets(object.name);
  printf("Enter designation: ");
  gets(object.designation);
  printf("Enter department: ");
  gets(object.department);
}

void showSlip()
{
  printf("Id: %d\nSalary: %d\nName: %s\nDesignation: %s\nDepartment: %s\n", object.id, object.salary, object.name, object.designation, object.department);
}

int main()
{
  getData();
  showSlip();
  return 0;
}
