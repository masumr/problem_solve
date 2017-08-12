#include<bits/stdc++.h>
using namespace std;
vector<char>v[10],vv;
map<char,bool>mp;
int main(){
    char ch='A';
    mp['A']=1;mp['U']=1;mp['I']=1;mp['E']=1;mp['O']=1;
    vv.push_back('A');vv.push_back('U');vv.push_back('E');vv.push_back('O');vv.push_back('I');
    for(int i=1;i<=26;i++){
        if(!mp[ch+i-1]){
            if(i%9==0)v[9].push_back(ch+i-1);
            else v[i%9].push_back(ch+i-1);
        }
    }
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int tt=n/2+n%2;
        string sk="";
        int k=0;
        for(int i=1;i<=tt;i++){
            sk+=vv[k];
            if(i%21==0)k++;
        }
        tt=n/2;
        string sv="";
        int kl=0;
        k=1;
        int sum=0;
        for(int i=1;i<=tt;i++){
            //cout<<sum+v[k].size()*5<<' '<<v[k][kl]<<endl;;
            int ll=sum+v[k].size()*5;
            sv+=v[k][kl];
            if(i==(sum+v[k].size()*5)){
                sum+=v[k].size()*5;
                k++;
                kl=0;
            }
            if(i%5==0 && i!=ll)kl++;
        }
        sort(sv.begin(),sv.end());
        int k1=0,k2=0;
        //cout<<sv<<endl;
        printf("Case %d: ",++c);
        for(int i=0;i<n;i++){
            if(i%2){
                cout<<sv[k1];
                k1++;
            }
            else{
                cout<<sk[k2];
                k2++;
            }
        }
        cout<<endl;
    }
}
