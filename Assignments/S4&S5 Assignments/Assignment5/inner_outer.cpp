#include<iostream>
using namespace std;

namespace Outer{
    string out = "4:00 pm";
    void outtime(){
        cout<<"Out at "<<out<<endl;
    }
}
namespace Inner{
    string in = "9:00 am";
    void intime(){
        cout<<"In at "<<in<<endl;
    }
}
int main(){
    Inner::intime();
    Outer::outtime();
return 0;
}