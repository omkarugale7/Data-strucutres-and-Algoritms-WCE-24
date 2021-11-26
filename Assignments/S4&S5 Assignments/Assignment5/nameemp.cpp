#include<iostream>
using namespace std;

namespace employ{
    class Employee{
    public:
    int EmpId, empSalary;
    string empname;
    void setDetails(){
        cout<<"Enter the details:"<<endl;
        cout<<"Id: ";
        cin>>EmpId;
        cout<<"Name: ";
        cin>>empname;
        cout<<"Salary: ";
        cin>>empSalary;
    }
    void getDetails(){
        cout<<"Employee Details:"<<endl;
        cout<<"Id: "<<EmpId<<endl<<"Name: "<<empname<<endl<<"Salary: "<<empSalary<<endl;
    }
    };

}
int main(){
    using namespace employ;
    Employee emp;
    emp.setDetails();
    emp.getDetails();
return 0;
}