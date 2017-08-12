#include<bits/stdc++.h>
using namespace std;
//int digit()
int sum;
void binary(int n){
    if(n<=1){sum=n;return;}
    int r=n&1;
    binary(n>>1);
    sum=sum*10+r;
}
int main(){
    vector<int>v;
    int k=0;
    for(int i=1;i<=128;i++){
        sum=0;
        binary(i);
        v.push_back(sum);
    }
   // for(int i=1;i<=20;i++)cout<<v[i]<<' ';
    int n;
    cin>>n;
    int t=lower_bound(v.begin(),v.end(),n)-v.begin();
    vector<int>s;
    while(n>=10){
        while(v[t]<=n){s.push_back(v[t]);n-=v[t];}
        t--;
    }
    for(int i=1;i<=n;i++)s.push_back(1);
    cout<<s.size()<<endl;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)cout<<s[i]<<' ';

}
