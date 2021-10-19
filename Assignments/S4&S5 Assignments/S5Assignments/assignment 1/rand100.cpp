#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int num;
    srand(time(NULL));
    num = rand()%(90+1) + 10;
    cout<<num;
return 0;
}