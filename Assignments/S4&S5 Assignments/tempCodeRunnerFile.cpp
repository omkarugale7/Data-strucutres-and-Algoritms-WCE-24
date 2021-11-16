#include<iostream>
using namespace std;

class employee
{
private:
    int empid,salary;
    string name, designation,dept; 
public:
    employee(){
        dept="Sales";
        salary = 10000;
    }
    void Info(int employid, string empname, string desig){
        empid = employid;
        name = empname;
        designation = desig;
    }
    void display(){
        cout<<"Employee Details:"<<endl;
        cout<<"\tId : "<<empid<<endl;
        cout<<"\tName : "<<name<<endl;
        cout<<"\tDesignation : "<<designation<<endl;
        cout<<"\tDeparture : "<<dept<<endl;
        cout<<"\tSalary : "<<salary<<endl;
    }
    
};



int main(){
    employee e1;
    e1.Info(3701, "Rohit", "Sales Analyst");
    e1.display();
return 0;
}