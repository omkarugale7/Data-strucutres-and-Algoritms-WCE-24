#include<iostream>
using namespace std;


class MAT
{
	int a[10][10],m,n;
	public:

		void inputmatrices();
		void outputmatrices();
		MAT operator*(MAT x);
		MAT operator+(MAT x);
};

void MAT::inputmatrices()
{
	int i,j;
	cout<<"Enter order of matrix:";
	cin>>m>>n;
	cout<<"Enter matrix elements:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}

void MAT::outputmatrices()
{ 
	int i,j;
	for(i=0;i<m;i++)
	{ 
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
			cout<<endl; 
	}
}

MAT MAT::operator+(MAT x){
    MAT ad;
    int i,j;
	if(m==x.m && n==x.n){
		ad.m=m;
		ad.n = x.n;
		for(i = 0;i<m;i++){
			for(j=0;j<x.n;j++){
				ad.a[i][j]=a[i][j]+x.a[i][j];
			}
		}
		return ad;
	}
	else{
		cout<<"Addition is not possible.";
        return ad;
    }
}

MAT MAT::operator*(MAT x)
{ 
	MAT c;
	int i,j,k;
	if(n==x.m)
	{ 
		c.m=m;
		c.n=x.n;
		for(i=0;i<m;i++)
		{
			for(j=0;j<x.n;j++)
			{ 
				c.a[i][j]=0;
                for(k=0;k<m;k++)
                {
                    c.a[i][j]+=a[i][k]*x.a[k][j];
                }
			}
		}
		return c; 
	}
	else{
		cout<<"Multiplication is not possible.";
        return c;
    }
}

int main()
{ 
MAT A,B,C;
cout<<"Enter matrix A order and elements:"<<endl;
A.inputmatrices();
cout<<"Enter matrix B order and elements:"<<endl;
B.inputmatrices();
C=A*B;
cout<<"Multiplication of the matrices is:"<<endl;
C.outputmatrices();
C=A+B;
cout<<"Sum of the matrices is:"<<endl;
C.outputmatrices();
return 0;
}