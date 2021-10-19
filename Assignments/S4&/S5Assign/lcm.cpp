#include<iostream>
using namespace std;

int find_lcm(int a, int b){
    int flag=1,num = (a>b)?a:b;
    while(flag){
        if(num%a==0 && num%b==0){
            break;
        }
        num++;
    }
    return num;
}
int main(){
    int a,b, lcm;
    cout<<"FIND THE LCM OF a AND b:"<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    lcm = find_lcm(a,b);
    cout<<"HCF of a and b : "<<lcm;
return 0;
}