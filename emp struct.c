#include<stdio.h>
#include<string.h>
struct employee
{
 char emp_name[20];
 int emp_id;
 float emp_salary;
};
int main()
{
struct employee emp;
   int emp_id;
   char emp_name[20];
   float emp_salary;
   int num;
   scanf("%d",&num);
   emp.emp_id=num;
   scanf("%s",&emp_name);
   strcpy(emp.emp_name,emp_name);
   scanf("%f",&emp_salary);
   emp.emp_salary=emp_salary;
   printf("Employee Id is:%d\n", emp.emp_id);
   printf("Employee name is :%s\n",emp.emp_name);
   printf("Employee Salary is :%.2f\n",emp.emp_salary);
   return 0;
}
