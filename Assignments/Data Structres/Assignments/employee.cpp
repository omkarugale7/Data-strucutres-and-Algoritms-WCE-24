// 1.	Create an Employee class to enter and display information of employee such as EmpID, Name, Address, Designation and Salary of last five years and calculate average salary (create five objects to enter and display data). 

#include<iostream>
using namespace std;

class Employee{
	public:
	string name,id,address,designation;
	float salary[5];
	
	float average()
	{
		float sum = 0;
		for(int i=0;i<5;i++)
		{
			sum = sum + salary[i];
		}
		return sum/5;
	}
};

int main()
{
	class Employee e[5];
	for(int i=0;i<5;i++)
	{
		cin.clear();
		fflush(stdin);
		cout<<"Enter Data Of Employee no. "<<i+1<<endl;
		cout<<"Employee's Name : ";
		getline(cin, e[i].name);
		cin.clear();
		fflush(stdin);
		cout<<"Employee's ID : ";
		getline(cin, e[i].id);
		cin.clear();
		fflush(stdin);
		cout<<"Employee's Address : ";
		getline(cin, e[i].address);
		cin.clear();
		fflush(stdin);
		cout<<"Employee's Designation : ";
		getline(cin, e[i].designation);
		cin.clear();
		fflush(stdin);
		cout<<"Employee's Salary Of Last 5 years : "<<endl;
		for(int j=0;j<5;j++)
		{ 
			cout<<j+1<<" Year(s) Back : ";
			cin>>e[i].salary[j];
		}
		cout<<endl<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Data Of Employee no. "<<i+1<<endl;
		cout<<"Employee's Name : "<<e[i].name<<endl;
		cout<<"Employee's ID : "<<e[i].id<<endl;
		cout<<"Employee's Address : "<<e[i].address<<endl;
		cout<<"Employee's Designation : "<<e[i].designation<<endl;
		cout<<"Employee's Salary Of Last 5 years : "<<endl;
		for(int j=0;j<5;j++)
		{ 
			cout<<j+1<<" Year(s) Back : "<<e[i].salary[j]<<endl;
		}
		cout<<"Average Salary : "<<e[i].average()<<endl<<endl;
	}
	
	return 0;
}