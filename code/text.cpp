using namespace std;
#include<bits/stdc++.h>
typedef long long   LL;
//typedef int   LL;
typedef long long int  ll;
typedef   pair<LL,LL>  PII;
typedef   vector< PII > VPII;
typedef   vector<LL>   VI;
typedef   map<string,LL>  MSI;
typedef   map<LL,LL>  MII;
///Print
#define casep(no,val) printf("Case %lld: %lld\n",++no,val)
#define casenl(no) printf("Case %lld:\n",++no)
#define RR(n,m)       scanf("%lld%lld", &n,&m)
#define case(no) printf("Case %lld: ",++no)
#define R(n)       scanf("%lld", &n)
#define P(a)  printf("%lld\n",a)
#define NL printf("\n")
///LOOP
#define FORSTL(x,n) for(__typeof(n.begin()) x=n.begin();x!=n.end();x++)
#define repp(x,n) for(__typeof(n) x=1;x<=(n);x++)
#define reps(i,x) for(int  i=0;i<(x.size());i++)
#define rep(x,n) for(__typeof(n) x=0;x<(n);x++)
///Shortcut
#define Unique(store) store.resize(unique(store.begin(),store.end())-store.begin())
#define fastinput ios_base::sync_with_stdio(false); cin.tie(false);
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define all(x) x.begin(),x.end()
#define len(s) s.size()
#define mp make_pair
#define pb push_back
#define SS second
#define FF first
///Binary_search
#define LB(a,x) (lower_bound(all(a),x)-a.begin())
#define UB(a,x) (upper_bound(all(a),x)-a.begin())
///Min AND Max
#define isEq(a,b) (fabs((a)-(b))<eps)
#define MIN3(a,b,c) min(a,min(b,c))
#define MAX3(a,b,c) max(a,max(b,c))
#define PI acos(-1.0)
#define EPS (1e-9)
///DEBUG
#define DDD(x,y,z) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<" | "#z" ="<<z<<endl;
#define DD(x,y) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<endl;
#define D(x) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<endl;

///Gcd and Lcm
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}
///Bigmod && Pow
template<class T>T my_pow(T n,T p){if(p==0)return 1;T x=my_pow(n,p>>2);x=(x*x);if(p&1)x=(x*n);return x;} ///n to the power p
template<class T>T big_mod(T n,T p,T m){if(p==0)return (T)1;T x=big_mod(n,p/2,m);x=(x*x)%m;if(p&1)x=(x*n)%m;return x;}
///string to int
template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}///
string itos(LL n){string s;while(n){s+=(n%10+48);n/=10;}reverse(all(s));return s;}
LL stoi(string s){LL n=0;rep(i,len(s))n=n*10+(s[i]-48);return n;}
/// geometry
double DEG(double x) { return (180.0*x)/(PI);}
double RAD(double x) { return (x*(double)PI)/(180.0);}
template<typename T> T DIS(T x1,T y1,T x2, T y2){return sqrt( (double)( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) ) );}
template<typename T> T ANGLE(T x1,T y1,T x2, T y2){ return atan( double(y1-y2) / double(x1-x2));}
template<typename T> LL isLeft(T a,T b,T c) { return (c.x-a.x)*(b.y-a.y)-(b.x-a.x)*(c.y-a.y); }
const  int N=2e5+5,MOD=1e9+7;

struct info{LL x;string y;}arr[N];bool com(info a,info b){return (a.x<b.x) or (a.x==b.x and a.y<b.y);}
LL ar[N],br[N];LL a=0,b=0,c=0,r=0,rr=0,res=0,n,m,t=0,ks=0;
string  s,ss;
int main(){
        
}
