#include<iostream>
using namespace std;

class Square{
    private:
    int s;
    float area;
    public:
    //Constructor
    Square(int side){
        s = side;
    }
    //Copyconstructor
    Square(Square &obj){
        s = obj.s;
        area = s*s;
    }
    float get_area(){
        return area;
    }
};
int main(){
    int side;
    cout<<"Enter the length of the side:";
    cin>>side;
    
    Square c(side);
    Square c1(c);
    cout<<"Side ="<<side<<endl<<"Area = "<<c1.get_area();
return 0;
}