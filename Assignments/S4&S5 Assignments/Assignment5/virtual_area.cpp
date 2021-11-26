/*1.Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called triangle and rectangle from the base shape. Add to the base class, a member function get_data() to initialize base class data members and another member function display_area() to compute and display the area of figures. Make display_area() as a virtual function and redefine this function in the derived classes to suit their requirements. 
Using these three classes, design a program that will accept dimensions of a triangle or a rectangle interactively, and display the area. Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, and as base and height in the case of triangles, and used as follows: Area of rectangle = x * y 
Area of triangle = 1/2 * x * y 
*/
#include<iostream>
using namespace std;

class Shape{
    public:
    double x,y;
    virtual void get_data(){
        cout<<"Enter the base length: ";
        cin>>x;
        cout<<"Enter the height: ";
        cin>>y;
    }
    virtual void display_area(){
        cout<<"Area of the shape: "<<x*y<<endl;
    }

};

class Triangle:public Shape{
    public:
    void get_data(){
        cout<<endl<<"Triangle:"<<endl;
        cout<<"Enter the base length:";
        cin>>x;
        cout<<"Enter the Height:";
        cin>>y;

    }
    void display_area(){
        cout<<"Area of the Triangle = "<<(x*y)/2<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void get_data(){
        cout<<endl<<"Rectangle:"<<endl;
        cout<<"Enter the length:";
        cin>>x;
        cout<<"Enter the breadth:";
        cin>>y;

    }
    void display_area(){
        cout<<"Area of the Rectangle = "<<x*y<<endl;
    }
};

int main(){
    Triangle t;
    Rectangle r;
    t.get_data();
    t.display_area();
    r.get_data();
    r.display_area();
    return 0;
}