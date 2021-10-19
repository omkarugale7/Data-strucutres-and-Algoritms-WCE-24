#include<iostream>
using namespace std;

int find_hcf(int a, int b){
    int num = 0;
    for(int i = 2;i<=a;i++){
        if(a%i==0 && b%i==0){
            num = i;
        }
    }
    return num;
}
int main(){
    int a,b, hcf;
    cout<<"FIND THE HCF OF a AND b:"<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    hcf = find_hcf(a,b);
    cout<<"HCF of a and b : "<<hcf;
return 0;
}