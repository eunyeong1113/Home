#include <stdio.h>
#include <string.h>
#define SIZE 5

struct employee_info
{
   char no[10];
   char name[10];
   int pay;
   int children;
   int extra_pay;
   int total;
};
void search_by_EmpNumber(struct employee_info ptr[]);
void search_by_Name(struct employee_info ptr[]);
void main()
{
   struct employee_info employee[SIZE];
   int i,input;
   printf("사원번호   이름   기본급   자녀수   자녀수당\n");
   printf("--------------------------------------------\n");
   for(i=0;i<SIZE;i++)
   {
      scanf("%s %s %d %d",employee[i].no,employee[i].name,&employee[i].pay,&employee[i].children);
      if(employee[i].children>=2)
         employee[i].extra_pay=200000;
      else
         employee[i].extra_pay=100000;
      employee[i].total=employee[i].pay+employee[i].extra_pay;
   }

   printf("사원 번호로 검색할려면 1 이름으로 검색할려면 2 :");
   scanf("%d",&input);
   if(input==1)
      search_by_EmpNumber(employee);
   else
      search_by_Name(employee);
}
void search_by_EmpNumber(struct employee_info ptr[])
{
   int i;
   char input[10];
   scanf("%s",input);
   for(i=0;i<SIZE;i++)
   {
      if(strcmp(ptr[i].name,input)==0)
         printf("기본급 %d+ 자녀수당 %d= %d\n",ptr[i].pay,ptr[i].extra_pay,ptr[i].total);
   }
}
void search_by_Name(struct employee_info ptr[])
{
   int i;
   char input[10];
   scanf("%s",input);
   for(i=0;i<SIZE;i++)
   {
      if(strcmp(ptr[i].name,input)==0)
         printf("기본급 %d+ 자녀수당 %d= %d\n",ptr[i].pay,ptr[i].extra_pay,ptr[i].total);
   }
}