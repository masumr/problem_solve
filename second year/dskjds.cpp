#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lu;
typedef long double ll;
int main(){
    long double p,r,n;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%Lf %Lf %Lf",&p,&r,&n);
        ll val=ceil(log10(n/p)/log10(1+r/100));
        double sd=12345671234567123456;
        cout<<sd<<endl;
        printf("Case %d: %.0Lf\n",++c,val);
    }
}
