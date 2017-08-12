#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int n=1000001;
vector<int>a,p;
bitset<1001>s;
void prime(){
    p.push_back(2);
    for(int i=3;i<=1001;i+=2){
        if(s[i]==0){
            p.push_back(i);
            for(int j=i*i;j<=1001;j+=i)
                s[i]=1;
        }
    }
}
ll pf(ll n){
    int count=0;
    for(int i=0;i<p.size();i++){
        while(n%p[i]==0)
        {
            count++;
            n/=p[i];
        }
        if(n<p[i]) break;
    }
    if(n>1) count++;
    return count;
}
int main(){
    prime();
    ll sum=0;
    for(int i=2;i<=n;i++){
        sum+=pf(i);
        a.push_back(sum);
    }
    int x;
    while(cin>>x){
        cout<<a[x-2]<<endl;
    }

}
