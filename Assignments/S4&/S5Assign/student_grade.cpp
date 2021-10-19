#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    int roll_no, marks[5], avg=0;
    string name;
    string address;

public:
    void Take_value(){
        cout<<"Enter Your Roll No. : ";
        cin>>roll_no;
        cout<<"Enter Your Name : ";
        cin>>name;
        cout<<"Enter Your address : ";
        cin>>address;
        getchar();
        cout<<"Enter your marks according to the subject number:"<<endl;
        for(int i = 0 ; i<5;i++){
            cout<<"\tEnter the subject "<<i+1<<":";
            cin>>marks[i];
            avg+=marks[i];
        }
        avg = avg/5;
    }
    void display_info(){
        cout<<endl<<"Here is the details:";
        cout<<endl<<"Name:"<<name<<endl<<"Roll No.:"<<roll_no<<endl<<"Address :"<<address<<endl<<"Marks:"<<endl;
        for(int i = 0;i<5;i++){
            cout<<"\tSubject "<<i+1<<":"<<marks[i]<<endl;
        }
        cout<<"Average : "<<avg;
    }
};

int main(){
    student stu1;
    cout<<"Enter your details:"<<endl;
    stu1.Take_value();
    stu1.display_info();
return 0;
}