#include<stdio.h>
#include<math.h>
#include<string.h>
struct sp
{

    char stu_name[100];
    char stu_post[100];
    int stu_roll;
    int stu_std;
    int stu_age;
  

}legend;


void showDataOfStudent(struct sp *ssp,int n)
{

    for(int i=0; i<n; i++)
    {
        printf("name of student %d\n",i+1);
        printf("%s\n",(ssp+i)->stu_name);

        printf("school name of student %d\n",i+1);
        printf("%s\n",(ssp+i)->stu_post);

        printf("roll id of student %d\n",i+1);
        printf("%d\n",(ssp+i)->stu_roll);

        printf("std of student %d\n",i+1);
        printf("%d\n",(ssp+i)->stu_std);

        printf(" age of student %d\n",i+1);
        printf("%d\n",(ssp+i)->stu_age);

    }

}

int main()
{
    struct sp *ssp,s1[100];
    int n;
    ssp=s1; 

    printf("Enter number of students\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {

        printf("enter name of student %d\n",i+1);
        scanf("%s",&(ssp+i)->stu_name);

        printf("enter school name of student %d\n",i+1);
        scanf("%s",&(ssp+i)->stu_post);

        printf("enter roll id of student %d\n",i+1);
        scanf("%d",&(ssp+i)->stu_roll);

        printf("enter std of student %d\n",i+1);
        scanf("%d",&(ssp+i)->stu_std);

        printf("enter age of student %d\n",i+1);
        scanf("%d",&(ssp+i)->stu_age);
    }
        printf(".....alll....data.....\n");
        showDataOfStudent(ssp,n);
        printf("\n");
      
  
}