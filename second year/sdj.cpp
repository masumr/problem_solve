#include<bits/stdc++.h>
using namespace std;
struct node{
    string s1,s2;
};
vector<node>s1;
vector<string>v,v1;
int main(){
    string sk,sk1;
    int n;
    //cout<<min("a","a");
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>sk>>sk1;
        node nd;
        nd.s1=sk;nd.s2=sk1;
        s1.push_back(nd);
        //s2.push_back(sk1);
    }
    //sort(s1.begin(),s1.end());
    //for(int i=0;i<s1.size();i++){cout<<s1[i]<<' ';}cout<<endl;
    bool ckk=0;
    //cout<<1<<endl;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        //cout<<i<<' ';
        node nd=s1[x-1];
        if(i==0){
            string s=min(nd.s1,nd.s2);
            v.push_back(s);
            v1.push_back(s);
        }
        else{
            bool ck=0,cc=0;
            if(nd.s1>=v[i-1])ck=1;
            if(nd.s2>=v[i-1])cc=1;
            if(ck && cc){
                string s=min(nd.s1,nd.s2);
                v.push_back(s);
                v1.push_back(s);
            }
            else if(ck){
                v.push_back(nd.s1);
                v1.push_back(nd.s1);
            }
            else if(cc){
                v.push_back(nd.s2);
                v1.push_back(nd.s2);
            }
            else {ckk=1;break;}
        }
    }
    if(ckk){cout<<"NO"<<endl;return 0;}
    sort(v1.begin(),v1.end());
    bool ck=0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]!=v[i]){ck=1;break;}
    }
    if(ck)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
