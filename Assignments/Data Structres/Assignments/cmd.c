#include<stdio.h>
#include<stdlib.h>
struct Emp
{
	int eno;
	char* ename;
	int esal;
};
void main(int argc,char* argv[])
{
	struct Emp e;
	printf("Arg count:%d\n",argc);
	e.eno=atoi(argv[1]);
	e.ename=argv[2];
	e.esal=atoi(argv[3]);
	
	printf("Eno:%d\n",e.eno);
	printf("Ename:%s\n",e.ename);
	printf("Esal:%d\n",e.esal);
}