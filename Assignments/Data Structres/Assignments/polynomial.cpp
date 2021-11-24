#include<iostream>
using namespace std;


class node{
    public:
    int coef, exp;
    node* next;
    node(int a,int n){
        coef = a;
        exp = n;
        next = NULL;
    }
};

void insert(int exp, int coef, node *&poly){
    node* p = new node(coef, exp);
    if(poly == NULL){
        poly = p;
    }
    else{
    node* temp = poly ;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
    poly = temp;
    }
}

node* add(node* pol1,node* pol2){
    node* res = NULL;
    int coefr, expr;
    while(pol1!=NULL && pol2!=NULL){
    if(pol1->exp == pol2->exp){
        coefr = pol1->coef + pol2->coef;
        expr = pol1->exp;
        // res = res->next;
        insert(expr,coefr, res);
        pol1 = pol1->next;
        pol2 = pol2->next;
    }
    else if(pol1->exp > pol2->exp){
        coefr = pol1->coef;
        expr = pol1->exp;
        insert(expr,coefr, res);
        pol1 = pol1->next;
    }
    else{
        coefr = pol2->coef;
        expr = pol2->exp;
        insert(expr,coefr, res);
        pol1 = pol2->next;
    }
    }
    return res;
}

void display(node* dis){
	node* temp = dis;
    if(temp==NULL){
        cout<<"NULL";
    }
    while(temp!=NULL){
        cout<<temp->coef<<"x^"<<temp->exp<<" ";
        temp = temp->next;
    }
}
int main(){
    node *Pol1 = NULL;
    node *Pol2 = NULL;
    node* Res = NULL; 
    int n;
    cout<<"--Polynomial System--"<<endl;
    cout<<"Enter the first polynomial's highest power:"<<endl;
    cin>>n;
    int coef;
    cout<<"Enter the Coefficients:"<<endl;
    for(int i = n;i>=0;i--){
        cout<<i<<"th coefficient = ";
        cin>>coef;
        insert(i,coef,Pol1);
    }
    display(Pol1);
    cout<<"Enter the second polynomial's highest power:"<<endl;
    cin>>n;
    cout<<"Enter the Coefficients:"<<endl;
    for(int i = n;i>=0;i--){
        cout<<i<<"th coefficient = ";
        cin>>coef;
        insert(i,coef,Pol2);
    }
    Res = add(Pol1,Pol2);
    display(Res);

return 0;
}
