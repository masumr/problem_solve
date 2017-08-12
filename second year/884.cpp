#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=1000;
int n=10000;
vector<int>p,f;
//map<int,int>f;
bool a[100000];
/*int fac_d(){

}*/
void prime(){
    p.push_back(2);
    for(int i=3;i<=1000;i+=2){
        if(a[i]==false){
            p.push_back(i);
            for(int j=i*i;j<=1000;j+=i)
                a[j]=true;
        }
    }
}
ll num(ll n){
    ll count=0,i=0;
    while(i<p.size()){
        while(n%p[i]==0){
            count++;
            n/=p[i];
        }
        i++;
        if(p[i]>n) break;
    }
    if(count==0) count++;
    return count;
}
int main(){
    prime();
    int c=0;
    int x;
    while(cin>>x){
        int sum=0;
        for(int i=2;i<=x;i++)
            sum+=num(i);
        cout<<sum<<endl;
    }

}
