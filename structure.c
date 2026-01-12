#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    float cgpa;
};
int main()
{
   struct student stud;
   int roll_no;
   char name[20];
   float cgpa;
   int num;
   scanf("%d",&num);
   stud.roll_no=num;
   scanf("%s",name);
   strcpy(stud.name,name);
   scanf("%f",&cgpa);
   stud.cgpa=cgpa;
   printf("Roll number is:%d\n",stud.roll_no);
   printf("Name is :%s\n",stud.name);
   printf("CGPA is :%f\n",stud.cgpa);
   return 0;
}
