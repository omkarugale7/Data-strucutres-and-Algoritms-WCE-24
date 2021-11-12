#include<iostream>
#include<string>
using namespace std;

int main(){
    string search;
    int n =0;
    cout<<"***Welcome to Dictionary***"<<endl;
    string word[] = {"consent", "influential", "circumscribe"};
    string mean[] = {"permission for something to happen or agreement to do something.", "having great influence on someone or something.","restrict (something) within limits."};
    cout<<"Enter the word to search meaning:";
    cin>>search;
    for(int i = 0;i<3;i++){
        if(word[i]==search){
            n=1;
            cout<<">>>Meaning : "<<mean[i];
            break;
        }
    }
    if(n==0){
        cout<<"The word is not available in the dictionary";
    }
return 0;
}