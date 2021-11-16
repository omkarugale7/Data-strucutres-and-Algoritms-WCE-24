#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

class String{
    public:
    char str[100];
    String(char s[]){
        strcpy(str,s);
    }
    int operator==(String s1){
        if(strcmp(str,s1.str)==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator<=(String s2){
        if(strlen(str)<strlen(s2.str)){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator>=(String s3){
        if(strlen(str)>strlen(s3.str)){
            return 1;
        }
        else{
            return 0;
        }
    }
};
    void compare(String s1,String s2){
        if(s1==s2){
            cout<<endl<<s1.str<<" is equal to "<<s2.str;
        }
        else if(s1>=s2){
            cout<<endl<<s1.str<<" has more characters than "<<s2.str;
        }
        else if(s1<=s2){
            cout<<endl<<s1.str<<" has less characters than "<<s2.str;
        }
    }

int main(){
    char s_1[] = "Walchand";
    char s_2[] = "Sangli";
    String s1(s_1),s2(s_2);
    compare(s1,s2);
return 0;
}