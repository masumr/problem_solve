#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v,v2;
vector<int>v1,v3;
int main(){
    int n,x;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){cin>>x;v1.push_back(x);sum+=x;}
    for(int i=0;i<n;i++){cin>>x;v2.push_back(make_pair(x,v1[i]));}
    int count=0,s1,s2,s3;
    sort(v2.rbegin(),v2.rend());
    //for(int i=0;i<n;i++)cout<<v2[i].first<<' '<<v2[i].second<<endl;
    for(int i=0;i<n;i++){
        count=0;s1=0;s2=0;s3=sum;
        int lo=i;
        for(int j=i;j<n;j++){
            if(s3>0){
                count++;
                s3-=v2[j].first;
                s1+=v2[j].second;
            }
            else{
                //cout<<count<<' ';
                v.push_back(make_pair(count,sum-s1));
                s3+=v2[lo].first;
                s1-=v2[lo].second;
                lo++;
                count--;
            }
        }
        if(s3<=0)v.push_back(make_pair(count,sum-s1));
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        count=0;s1=0;s2=0;s3=sum;
        int lo=i;
        for(int j=i;j<n;j++){
            if(s3>0){
                count++;
                s3-=v2[j].first;
                s1+=v2[j].second;
            }
            else{
                //cout<<count<<' ';
                v.push_back(make_pair(count,sum-s1));
                s3+=v2[lo].first;
                s1-=v2[lo].second;
                lo++;
                count--;
            }
        }
        if(s3<=0)v.push_back(make_pair(count,sum-s1));
    }
    sort(v.begin(),v.end());
    int b=v[0].first;
    int t=v[0].second;
    for(int i=0;i<v.size();i++)cout<<v[i].first<<' '<<v[i].second<<endl;
    for(int i=0;i<v.size();i++){
        if((v[i].first)==b){
            t=min(t,v[i].second);
        }
        else break;
    }
    cout<<b<<' '<<t<<endl;
}
