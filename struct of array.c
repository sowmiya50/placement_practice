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
    struct  employee emp[5];
    char emp_name[20];
    int emp_id;
    float emp_salary;
    int itr;
    for(itr=0;itr<5;itr+=1)
    {
        scanf("%d",&emp_id);
        emp[itr].emp_id=emp_id;
        scanf("%s",&emp_name);
        strcpy(emp[itr].emp_name,emp_name);
        scanf("%f",&emp_salary);
        emp[itr].emp_salary=emp_salary;
    }
   for(itr=0;itr<5;itr+=1)
   {
       printf("emp id:%d\n",emp[itr].emp_id);
       printf("emp name:%s\n",emp[itr].emp_name);
       printf("emp salary:%f\n",emp[itr].emp_salary);

   }
   return 0;
}
