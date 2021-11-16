#include<iostream>
using namespace std;

class Vehicle{
    public:
    int milage;
    int price;
};
class Cars:public Vehicle{
    public:
    int own_cost, warranty, seat_cap;
    string fuel_type;
};
class Bike:public Vehicle{
    public:
    int no_of_cyc,no_of_gears,tank_size;
    string cooling,wheel;
};
class Audi:public Cars{
    public:
    string model;
    void store(int mil,int p,int own,int war,int seat,string fuel,string mod){
        milage = mil;
        price = p;
        own_cost = own;
        warranty = war;
        seat_cap = seat;
        fuel_type = fuel;
        model = mod;
    }
    void print(){
        cout<<"Audi: "<<model<<endl;
        cout<<"Milage :"<<milage<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Ownership Cost :"<<own_cost<<endl;
        cout<<"Seat Capacity:"<<seat_cap<<endl;
        cout<<"Fuel Type:"<<fuel_type<<endl;
        cout<<"Warrenty :"<<warranty<<" years"<<endl;
    }
};
class Ford:public Cars{
    public:
    string model;
    void store(int mil,int p,int own,int war,int seat,string fuel,string mod){
        milage = mil;
        price = p;
        own_cost = own;
        warranty = war;
        seat_cap = seat;
        fuel_type = fuel;
        model = mod;
    }
    void print(){
        cout<<"Ford: "<<model<<endl;
        cout<<"Milage :"<<milage<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Ownership Cost :"<<own_cost<<endl;
        cout<<"Seat Capacity:"<<seat_cap<<endl;
        cout<<"Fuel Type:"<<fuel_type<<endl;
        cout<<"Warrenty :"<<warranty<<" years"<<endl;
    }
};
class Bajaj:public Bike{
    public:
    string make;
    void store(int mil,int p,int noc,int gears,int tank,string cool,string wheel_ty,string mak){
        milage = mil;
        price = p;
        no_of_cyc = noc;
        no_of_gears = gears;
        tank_size = tank;
        cooling = cool;
        wheel = wheel_ty;
        make = mak;
    }
    void print(){
        cout<<"Bajaj: "<<make<<endl;
        cout<<"Milage :"<<milage<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"No. of Cyclinders :"<<no_of_cyc<<endl;
        cout<<"No. of Gears:"<<no_of_gears<<endl;
        cout<<"Tank Size:"<<tank_size<<endl;
        cout<<"Cooling Type :"<<cooling<<endl;
        cout<<"Wheel Type :"<<wheel<<endl;
    }
};
class TVS:public Bike{
    public:
    string make;
    void store(int mil,int p,int noc,int gears,int tank,string cool,string wheel_ty,string mak){
        milage = mil;
        price = p;
        no_of_cyc = noc;
        no_of_gears = gears;
        tank_size = tank;
        cooling = cool;
        wheel = wheel_ty;
        make = mak;
    }
    void print(){
        cout<<"TVS: "<<make<<endl;
        cout<<"Milage :"<<milage<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"No. of Cyclinders :"<<no_of_cyc<<endl;
        cout<<"No. of Gears:"<<no_of_gears<<endl;
        cout<<"Tank Size:"<<tank_size<<endl;
        cout<<"Cooling Type :"<<cooling<<endl;
        cout<<"Wheel Type :"<<wheel<<endl;
    }
};
int main(){
    Audi a;
    Ford f;
    Bajaj b;
    TVS t;
    a.store(23,5000000,5500000,7,5,"petrol", "q7");
    f.store(25,1500000,1800000,6,5,"desiel", "endeavour");
    b.store(15,500000,2,4,1,"Liquid","Spokes", "Chetak");
    t.store(23,5000000,2,2,1,"Oil", "Alloys","Jupiter");
    cout<<endl;
    a.print();
    cout<<endl;
    f.print();
    cout<<endl;
    b.print();
    cout<<endl;
    t.print();
return 0;
}