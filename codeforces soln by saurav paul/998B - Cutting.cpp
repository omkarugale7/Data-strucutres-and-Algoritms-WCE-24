#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n, budget,temp;
    cin>>n>>budget;
    vl vec ,div ;
    for(int i=0 ; i< n ; i++)
        cin>>temp,vec.pb(temp);
    ll odd=0 , even =0 ;
    for( int i=0 ; i<n ;i++){
        temp=vec[i];
        if(temp&1)  odd++;
        else even++;
        if( (odd==even) && i+1<n)
            div.pb(abs(vec[i]-vec[i+1]));
    }
    sort(all(div));
    ll cnt=0;
    ll sz=SZ(div);
    for(int i=0 ; i<sz ; i++){

        budget-=div[i];
        if(budget>=0)
            cnt++;
        else break ;


    }
    cout<<cnt<<endl;
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
