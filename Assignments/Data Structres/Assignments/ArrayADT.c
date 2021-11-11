#include<stdio.h>
#include<stdlib.h>
struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};
void createArray(struct myArray* a,int t_size,int u_size)
{
	a->total_size=t_size;
	a->used_size=u_size;
	a->ptr=(int *)malloc(t_size*sizeof(int));
}
void setVal(struct myArray *a)
{
	for(int i=0;i<a->used_size;i++)
	{	printf("Enter value of %d element:\n",i+1);
		scanf("%d",&(a->ptr)[i]);
	}
} 
void show(struct myArray *a)
{
	for(int i=0;i<a->used_size;i++)
	{
		printf("%d\n",(a->ptr)[i]);
	}
}
void main()
{
	struct myArray marks;
	createArray(&marks,10,7);
	printf("setVal function\n");
	setVal(&marks);
	printf("Show Function\n");
	show(&marks);
}
