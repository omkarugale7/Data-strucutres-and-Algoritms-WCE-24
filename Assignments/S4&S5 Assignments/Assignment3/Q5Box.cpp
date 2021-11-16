#include <iostream>
using namespace std;

class Box {
      private:
      int length;     
      int breadth;    
      int height;     
   public:
      static int Area;
      
      //Parameterized Constructor 
      Box(int l, int b, int h) {
         length = l;
         breadth = b;
         height = h;
         Area = 2*(l*b+b*h+h*l);
      }
      static int getArea() {
         return Area;
      }
      

};

int Box::Area = 0;

int main(void) {
   int length,breadth,height;
   cout << "Enter the dimensions of Cuboid: "<<endl;
   cout<<"Length :";
   cin>>length;
   cout<<"Breadth :";
   cin>>breadth;
   cout<<"Height :";
   cin>>height;
   
   Box Box1(length, breadth, height);    

   cout <<endl<< "Surface Area = " << Box::getArea() << endl;

   return 0;
}