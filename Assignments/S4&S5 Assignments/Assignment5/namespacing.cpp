/*4.Create two namespaces as NMS1 and NMS2, define variable ‘a’ and function seta() and geta () in NMS1 and define variable ‘b’ and function setb() and getb () in NMS2. Write a program to 
a.	Assign and display data without using keyword.
b.	Assign and display data with using keyword.
*/

#include<iostream>
using namespace std;

namespace NMS1{
    int a;
    void seta(){
        cout<<endl<<"Enter the value of a: ";
        cin>>a;
    }
    void geta(){
        cout<<endl<<"a = "<<a<<endl;
    }
}
namespace NMS2{
    int b;
    void setb(){
        cout<<endl<<"Enter the value of b: ";
        cin>>b;
    }
    void getb(){
        cout<<endl<<"b= "<<b<<endl;
    }
}
int main(){
    //without using keyword
    NMS1::seta();
    NMS1::geta();
    NMS2::setb();
    NMS2::getb();
    
    //Using keyword
    using namespace NMS1;
    seta();
    geta();

    using namespace NMS2;
    setb();
    getb();

return 0;
}