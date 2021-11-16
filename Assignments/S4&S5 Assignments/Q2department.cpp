#include <iostream>
using namespace std;

class department
{
private:
    int Did, NO_of_Emp, AverageSal;
    string Dname;

public:
    department(int id, string name, int num, int avg)
    {
        Did = id;
        Dname = name;
        NO_of_Emp = num;
        AverageSal = avg;
    }
    void display()
    {
        cout <<endl<< "Here is the dipartment's Detail:"<<endl;
        cout << "Department Id : " << Did << endl;
        cout << "Department Name : " << Dname << endl;
        cout << "Number of Employees : " << NO_of_Emp << endl;
        cout << "Average Salary : " << AverageSal << endl;
    }
};
int main()
{
    int id, num, avg;
    string name;
    cout << "Here enter the dipartment's Detail:"<<endl;
    cout << "Department Id : ";
    cin >> id;
    cout << "Department Name : ";
    cin >> name;
    cout << "Number of Employees : ";
    cin >> num;
    cout << "Average Salary : ";
    cin >> avg;
    department D(id,name,num,avg);
    D.display();
    return 0;
}