#include<bits/stdc++.h>
using namespace std;
const int N=1234567;
char tx[N],pt[N];
vector<int>com(string s){
    int len=s.size();
    vector<int>v(len);
    int k=0;
    v[0]=0;
    for(int i=1;i<len;i++){
        //cout<<i<<' '<<k<<' '<<v[k-1]<<endl;

        while(k>0 && s[k]!=s[i]){
            //cout<<k<<' '<<v[k]<<endl;
            k=v[k-1];
        }
        //cout<<k<<endl;
        if(s[k]==s[i])k++;
        v[i]=k;
    }
    return v;
}
int pm(string s,string s1){
    int l1=s.size();
    int l2=s1.size();
    vector<int>v=com(s1);
    //cout<<s.size()<<endl;
   // for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
   // cout<<endl;
   int cnt=0;
    int q=0;
    for(int i=0;i<l1;i++){
        while(q>0 && s1[q]!=s[i])q=v[q-1];
        if(s1[q]==s[i])q++;
        if(q==l2){
            cnt++;
            //cout<<q<<' ';
            q=v[q-1];
        }
    }
    return cnt;
}
int main(){
    string s,s1;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        cin>>s>>s1;
        printf("Case %d: %d\n",++c,pm(s,s1));
    }
}
