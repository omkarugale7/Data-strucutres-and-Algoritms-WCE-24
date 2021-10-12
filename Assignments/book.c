#include<stdio.h>
#include<math.h>
#include<string.h>
struct sp
{

    char book_name[100];
    char book_author[100];
    float book_price;
    int book_pages;
    char book_date_published[100];

} legend;


void showDataOfBook(struct sp *ssp,int n)
{

    for(int i=0; i<n; i++)
    {
        printf("name of book %d\n",i+1);
        printf("%s\n",(ssp+i)->book_name);

        printf("author of book %d\n",i+1);
        printf("%s\n",(ssp+i)->book_author);

        printf("price of book %d\n",i+1);
        printf("%f\n",(ssp+i)->book_price);

        printf("no.of pages in book %d\n",i+1);
        printf("%d\n",(ssp+i)->book_pages);

        printf("date of publishment of book %d\n",i+1);
        printf("%s\n",(ssp+i)->book_date_published);

    }

}

int main()
{
    struct sp *ssp,s1[100];
    int n;
    ssp=s1;

    printf("Enter number of books\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {

        printf("enter name of book %d\n",i+1);
        scanf("%s",&(ssp+i)->book_name);

        printf("enter author  of book %d\n",i+1);
        scanf("%s",&(ssp+i)->book_author);

        printf("enter price of book %d\n",i+1);
        scanf("%f",&(ssp+i)->book_price);

        printf("enter no. of pages of book %d\n",i+1);
        scanf("%d",&(ssp+i)->book_pages);

        printf("enter date of publishment of book %d\n",i+1);
        scanf("%s",&(ssp+i)->book_date_published);


    }




    printf(".....alll....data.....\n");
    showDataOfBook(ssp,n);
    printf("\n");


}