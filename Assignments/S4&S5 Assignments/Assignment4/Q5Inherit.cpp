#include<iostream>
using namespace std;

class Mammals{
public:
    Mammals(){
        cout<<endl<<"I am mammal";
    }
};

class MarineAnimals{
    public:
    MarineAnimals(){
        cout<<endl<<"I am a marine animal";
    }
};

class BlueWhales:public Mammals,public MarineAnimals{
public:
    BlueWhales(){
        cout<<endl<<"I belong to both the categories: Mammals as well as Marine Animals";
    }
};

int main(){
    Mammals m1;
    MarineAnimals ma1;
    BlueWhales bw1;
    // m1.mam_print();
    // ma1.mar_print();
    // bw1.blue_print();
    // bw1.mam_print();
    // bw1.mar_print();

return 0;
}