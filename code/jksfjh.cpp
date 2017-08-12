#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2;
map<int,int>mp;
int main(){
    int t,x,sum=0;
    cin>>t;
    vector<pair<int,int> >v;
    for(int i=0;i<t;i++){
        cin>>x;
        sum+=x;
        v1.push_back(x);
    }
    int ss=0;
    for(int i=0;i<t;i++){
        cin>>x;
        ss+=x-v1[i];
        v2.push_back(ss);
         v.push_back(make_pair(x,v1[i]));
    }
    int sum1=0,bx=100000,tx=1000000,lo=0,hi=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(sum1+v[i].first<sum){
            sum1+=v[i].first;
            hi++;
        }
        else{
            if(bx>hi-lo){
                bx=hi-lo;
                tx=v2[hi]-v2[lo];
            }
            sum1-=v[i].first;
            hi++;
            lo++;
        }
    }
    cout<<bx<<' '<<tx<<endl;

}

