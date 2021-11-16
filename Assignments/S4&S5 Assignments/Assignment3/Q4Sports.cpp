#include<iostream>
using namespace std;

class Sports{
    private:
    string Name, Country;
    int NoOfPlayers;
    public:
    static int ObjectCount;

    Sports(string name,string country, int nop){
        Name = name;
        Country = country;
        NoOfPlayers = nop;

        ObjectCount++;
    }
    void display(){
        cout<<endl<<"Here is the details:"<<endl;
        cout<<"Sport's Name = "<<Name<<endl;
        cout<<"Number of Players = "<<NoOfPlayers<<endl;
        cout<<"Country = "<<Country<<endl<<endl;
    }
    static int Count(){
        return ObjectCount;
    }

};

int Sports::ObjectCount =0;
int main(){
    string name[3], country[3];
    int noy[3];
    for(int i = 0 ;i<3;i++){
        cout<<endl<<"Enter the sports name:";
        cin>>name[i];
        cout<<"Enter the number of players:";
        cin>>noy[i];
        cout<<"Enter the country :";
        cin>>country[i];
    }
    Sports s_1(name[0],country[0],noy[0]);
    Sports s_2(name[1],country[1],noy[1]);
    Sports s_3(name[2],country[2],noy[2]);
    s_1.display();
    s_2.display();
    s_3.display();
    cout<<"Total Number of Objects = "<<Sports::Count();
return 0;
}