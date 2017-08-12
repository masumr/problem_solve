#include<bits/stdc++.h>
using namespace std;
const int N=26;
int a[26][26];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
       // cout<<s<<endl;
        //cout<<s.size()<<endl;
        for(int i=0;i<s.size();i++)a[0][i]=s[i]-'0';
       // for(int i=0;i<s.size();i++)cout<<a[0][i]<<' ';

        for(int i=1;i<s.size();i++){
            cin>>s;
            for(int j=0;j<s.size();j++){
                a[i][j]=s[j]-'0';
            }
        }
        /*for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }*/
        int r[s.size()+1];
        int mx=0;
        for(int i=0;i<s.size();i++){
           // cout<<7<<' ';
            memset(r,0,sizeof r);
            for(int j=i;j<s.size();j++){
                for(int k=0;k<s.size();k++){
                    if(r[k]!=-1){
                        r[k]+=a[k][j];
                        if(a[k][j]==0){
                            r[k]=-1;
                        }
                    }
                    //cout<<2<<' ';
                }
               // for(int cc=0;cc<s.size();cc++)cout<<r[cc]<<' ';cout<<endl;
                int sum=0,mk=0;
                for(int k=0;k<s.size();k++){
                    if(r[k]==-1){
                        sum=0;
                    }
                    else{
                        sum+=r[k];
                        mx=max(mx,sum);
                    }
                }

            }
        }
        cout<<mx<<endl;
        if(t)cout<<endl;
    }
}
