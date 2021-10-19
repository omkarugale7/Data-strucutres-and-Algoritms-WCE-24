#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int num = 0, ran, i=1;
    srand(time(NULL));
    ran = rand()%100;
    while(true){
        cout<<"Enter your guess: ";
        cin>>num;
        if(num>ran){
            cout<<"It is too high"<<endl;
        }
        else if(num<ran){
            cout<<"It is too low"<<endl;
        }
        else{
            cout<<"The Guess is correct"<<endl;
            break;
        }
        i++;
    }
    cout<<"No. of Attempts : "<<i;
return 0;
}