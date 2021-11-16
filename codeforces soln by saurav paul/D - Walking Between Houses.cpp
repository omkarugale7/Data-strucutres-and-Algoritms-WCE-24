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
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
void FAST_IO();
void ara_read(vec &v,ll n);
////////////////////////

int main()
{
	ll n, k , s;
	scanf("%lld%lld%lld",&n,&k,&s);
	ll need_step = s/k ;
	ll extra = s%k ;
	if(k>s || (n-1)*k < s){
		puts("NO");
		return 0;
	}
	
	vector< ll > rem(k,need_step);
	while(extra)
		for(auto &x : rem){
			if(extra==0){
				break ;
			}
			--extra;
			x++;
			if(x>n-1){
				puts("NO");
				return 0;
			}
		}
	
	ll curr=1;
	puts("YES");
	for(auto x : rem){
		assert(x);
		if((curr+x) <=n){
			curr = curr + x;
			printf("%lld ",curr);
		}
		else{ 
			curr = curr - x;
			printf("%lld ",curr);
		}
	}
	puts("");
    return 0;
}

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);

}
void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i<n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
	
}