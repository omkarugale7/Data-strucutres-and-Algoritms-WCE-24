#include<iostream>
using namespace std;

class Circle{
    private:
    int r;
    float area;
    public:
    //Constructor
    Circle(int rad){
        r = rad;
    }
    //Copyconstructor
    Circle(Circle &obj){
        r = obj.r;
        area = 3.14*r*r;
    }
    float get_area(){
        return area;
    }
};
int main(){
    Circle c(13);
    Circle c1(c);
    cout<<"Radius = 13"<<endl<<"Area = "<<c1.get_area();
return 0;
}