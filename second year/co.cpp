#include<bits/stdc++.h>
using namespace std;
vector<string>sk;
vector<double>v;
map<double,string>mp;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        string s;
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            cin>>s;
            //stringstream ss;
            //ss<<s;
            //double num;
            //ss>>num;
            //mp[num]=s;
            //v.push_back(num);
            sk.push_back(s);
        }
        sort(sk.begin(),sk.end());
        //sort(v.begin(),v.end());
        cout<<sk[0];
        for(int i=1;i<sk.size();i++)cout<<","<<sk[i];
        cout<<endl;
        sk.clear();
        //v.clear();mp.clear();
    }
}
