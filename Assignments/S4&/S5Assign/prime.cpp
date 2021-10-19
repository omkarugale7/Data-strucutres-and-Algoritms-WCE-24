#include<iostream>
using namespace std;

int prime(int num){
    int n=0;
    for(int i = 2;i<=num/2;i++){
        if(num%i==0){
            n=1;
        }
    }
    return n;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int p = prime(num);
    if(p==1){
        cout<<num<<" is not a prime number.";
    }
    else{
         cout<<num<<" is a prime number.";
    }
return 0;
}