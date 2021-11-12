#include <stdio.h>
#include <string.h>

struct employee
{
    int Id;
    char name[30];
    char post[30];
    int salary;
    char joining_date[20];
    int age;
} em;

void entry_info(struct employee emp[])
{
    int n;
    scanf("%d", &n);
    FILE *ptr = NULL;
    ptr = fopen("employee.txt", "a");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:", i + 1);
        fprintf(ptr, "\n\nEmployee %d:", i + 1);
        printf("\nEnter your Name:");
        scanf("%s", (emp+i)->name);
        getchar();
        fprintf(ptr, "\n\tName: %s", (emp+i)->name);
        printf("Enter your Id No.:");
        scanf("%d", &(emp + i)->Id);
        fprintf(ptr, "\n\tId:%d", (emp + i)->Id);
        printf("Enter your age:");
        scanf("%d", &(emp + i)->age);
        fprintf(ptr, "\n\tAge:%d", (emp + i)->age);
        printf("Enter your Position:");
        scanf("%s", (emp+i)->post);
        getchar();
        fprintf(ptr, "\n\tPosition:%s", (emp + i)->post);
        printf("Enter your joining date:");
        scanf("%s", (emp+i)->joining_date);
        getchar();
        fprintf(ptr, "\n\tJoining Date:%s", (emp + i)->joining_date);
        printf("Enter your salary(in Rs):");
        scanf("%d", &(emp+i)->salary);
        fprintf(ptr, "\n\tSalary(in Rs):%d", (emp + i)->salary);
    }
    fclose(ptr);

    printf("\n\n The Record has been updated......");
}

void show_list()
{
    FILE *ptr;
    ptr = fopen("employee.txt", "r");
    printf("Here is the detailed list of all the Employees:\n");
    char c = getc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(ptr);
    }
    fclose(ptr);

}
int main()
{
    int n, option;
    struct employee emp[n];
    Option:
    printf("Choose the option below:\n");
    printf("1. Enter the Information\n2. See the list\n0. Exit\n");
    printf("Enter the option number:");
    scanf("%d", &option);
    do{
    switch (option)
    {
    case 1:
        entry_info(emp);
        goto Option;
        break;
    case 2:
        show_list();
        goto Option;
        break;
    }

    }while(option!=0);
    return 0;
}