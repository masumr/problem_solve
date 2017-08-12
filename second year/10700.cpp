#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
vector<char>c;
ll maximum(vector<ll>v){
   // cout<<v.size()<<' '<<c.size()<<endl;
    //for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
    for(int i=1;i<v.size();i++){
        if(c[i-1]=='+'){
            v[i]+=v[i-1];
            v[i-1]=0;
        }
    }
    ll sum=1;
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<' ';
        if(v[i]!=0){
            sum*=v[i];
        }
    }
    return sum;
}
ll minimum(vector<ll>v){
    for(int i=1;i<v.size();i++){
        if(c[i-1]=='*'){
            v[i]*=v[i-1];
            v[i-1]=0;
        }
    }
    ll sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                //cout<<s[i]<<' ';
                sum=sum*10+(s[i]-'0');
            }
            else{
                //cout<<sum<<' ';
                v.push_back(sum);
                sum=0;
                c.push_back(s[i]);
            }
        }
        //for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
        v.push_back(sum);
       printf("The maximum and minimum are %lld and %lld.\n",maximum(v),minimum(v));
        v.clear();
        c.clear();

    }

}
