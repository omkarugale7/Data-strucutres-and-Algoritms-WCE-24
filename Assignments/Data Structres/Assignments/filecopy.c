#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	fp= fopen("MSDhoni.txt","r");
	char ch;
	fp1=fopen("Copy.txt","w");
	while((ch=fgetc(fp))!=EOF)
	{	
		fputc(ch,fp1);
	}
	fclose(fp);
	fclose(fp1);
	printf("File Copied Into Another Name\n");
	return 0;
}