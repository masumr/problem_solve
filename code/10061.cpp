#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long zer(int n, int base)
{
	long zero=INT_MAX;
	for(long i = 2;i <= base;i++)
	{
		if(base%i!=0) continue;
		long int_b=0,int_n=0;
		while(base%i==0 && base!=0){int_b++;base/=i;}
		for(long j = i;j<=n;j*=i) int_n+=n/j;
		if(zero>int_n/int_b) zero=int_n/int_b;
	}
	return zero;
}
int main(){
    ll a,b;
    while(cin>>a>>b){
        double cd=0;
        for(int i=2;i<=a;i++){
            cd+=(log10(i)/log10(b));
        }
        cout<<zer(a,b)<<' '<<(int)(cd)+1<<endl;
    }
}
