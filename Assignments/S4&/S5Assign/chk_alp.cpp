#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the Character:";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"This is a Alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is a Digit";
    }
    else{
        cout<<"It is a special character";
    }
return 0;
}