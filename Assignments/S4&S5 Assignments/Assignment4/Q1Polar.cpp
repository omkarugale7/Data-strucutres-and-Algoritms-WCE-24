#include<iostream>
#include<cmath>
using namespace std;

class Polar{
    private:
    float x, y,r,a;
    public:
    Polar(float rad=0, float ang=0){
        r = rad;
        a = ang;
        x = r*cos(a);
        y = r*sin(a);
    }
    Polar operator+(Polar const &obj){
        Polar pol;
        float a,b;
        a = obj.r*cos(a);
        b = obj.r*sin(obj.a);
        pol.x = x + a;
        pol.y = y + b;
        pol.r = sqrt(pol.x*pol.x+pol.y*pol.y);
        pol.a = atan(pol.y/pol.x);
        return pol;
    }
    void print(){
        cout<<"Result :\nRadius = "<<r<<"\nAngle = "<<a;
    }
};
int main(){
    Polar p1(3,1), p2(5,0.77);
    Polar p3 = p1 + p2;
    p3.print(); 
return 0;
}