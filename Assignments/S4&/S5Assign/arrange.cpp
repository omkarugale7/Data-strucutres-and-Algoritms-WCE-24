#include<iostream>
using namespace std;

class three{
    private:
    int arr[3];
    public:
    void numbers(int a, int b, int c){
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
    }
    void sort_it(){
        for(int i = 0;i<3;i++){
        for(int i = 1 ; i<3;i++){
            if(arr[i-1]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }
        }
        cout<<endl<<"Largest :"<<arr[0];
        cout<<endl<<"Second Largest :"<<arr[1];
        cout<<endl<<"Smallest :"<<arr[2];
    }
};

int main(){
    three num;
    int a,b,c;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    num.numbers(a, b, c);
    num.sort_it();
return 0;
}