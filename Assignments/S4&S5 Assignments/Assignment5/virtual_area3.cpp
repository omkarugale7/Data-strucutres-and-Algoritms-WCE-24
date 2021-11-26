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
    
};
class Circle:public Shape{
    public:
    void get_data(){
        cout<<endl<<"Circle:"<<endl;
        cout<<"Enter the radius:";
        cin>>x;
        y=0;

    }
    void display_area(){
        cout<<"Area of the Circle = "<<3.14*x*x<<endl;
    }
};

int main(){
    Triangle t;
    Rectangle r;
    Circle c;
    t.get_data();
    t.display_area();
    r.get_data();
    r.display_area();
    c.get_data();
    c.display_area();
    return 0;
}