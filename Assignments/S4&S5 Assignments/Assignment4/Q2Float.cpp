#include<iostream>
using namespace std;

class FLOAT
{
private:
    /* data */
public:
    float num;
 FLOAT(float n = 0)
 {num = n;}
 FLOAT operator+(FLOAT &obj){
    FLOAT add;
    add.num= num + obj.num;
    return add;
}     
 FLOAT operator-(FLOAT &obj){
      FLOAT sub;
     sub.num = num-obj.num;
     return sub;
 }
 FLOAT operator*(FLOAT &obj){
    FLOAT mul;
    mul.num = num*obj.num;
    return mul;
 }    
 FLOAT operator/(FLOAT &obj){
     FLOAT div;
     div.num = num/obj.num;
     return div;
 }
 void display(){
     cout<<"Number ="<<num<<endl;
 }
 void display_add(){
     cout<<"\nAddition = "<<num;   
 }  
 void display_sub(){
     cout<<"\nSubstraction = "<<num;   
 }  
 void display_mul(){
     cout<<"\nMultiplication = "<<num;   
 }  
 void display_div(){
     cout<<"\nDivision = "<<num;   
 }  
   
};


int main(){
    FLOAT f1(23.43),f2(34.23);
    f1.display();
    f2.display();
    FLOAT f3 = f1 + f2;
    f3.display_add();
    f3 = f1 - f2;
    f3.display_sub();
    f3 = f1*f2;
    f3.display_mul();
    f3 = f1/f2;
    f3.display_div();
return 0;
}