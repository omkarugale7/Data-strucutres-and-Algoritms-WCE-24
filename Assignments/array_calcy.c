#include<stdio.h>
#include<stdlib.h>


float calculation(int n , float a[], char operator[]){
    operator[n-1] = '=';
    printf("\nEnter the 1st number:");
    scanf("%f", &a[0]);
    float product=a[0];
    for(int i =1;i<n;i++){
        getchar();
        printf("\nEnter the %d operator:", i);
        scanf("%c", &operator[i-1]);
        printf("\nEnter the %d number:", i+1);
        scanf("%f", &a[i]);
        if(operator[i-1]=='+'){
            product+=a[i];
        }
        else if(operator[i-1]=='-'){
            product-=a[i];
        }
        else if(operator[i-1]=='*'){
            product*=a[i];
        }
        else if(operator[i-1]=='/'){
            product/=a[i];
        }
    }
    return product;
}
int main()
{
    float *a;
    int n;
    char *operator;
    printf("Welcome to Pointer Calcy...\n");
    printf("YOU have to use characters (+,-,*,/) for operators\n");
    printf("\nEnter the Number of operands:");
    scanf("%d", &n);
    a = (float*)calloc(n,sizeof(float));
    operator = (char*)calloc(n,sizeof(char));
    float result = calculation(n,a,operator);
    printf("\nFinal Output = %.2f", result);
    return 0;
}