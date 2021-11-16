#include<iostream>
using namespace std;

class Triangle{
    private:
    int w,h;
    float area;
    public:
    //Constructor
    Triangle(int width,int height){
        w = width;
        h = height;
    }
    //Copyconstructor
    Triangle(Triangle &obj){
        w = obj.w;
        h = obj.h;
        area = w*h/2.0;
    }
    float get_area(){
        return area;
    }
};
int main(){
    int width, height;
    cout<<"Enter the width:";
    cin>>width;
    cout<<"Enter the height:";
    cin>>height;
    Triangle c(width,height);
    Triangle c1(c);
    cout<<"Width ="<<width<<endl<<"Height ="<<height<<endl<<"Area = "<<c1.get_area();
return 0;
}