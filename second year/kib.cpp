#include<bits/stdc++.h>
using namespace std;
bool ck(int sum,int n ){
    return (n*9>=sum && sum>=0);
}
int main(){
    int s,m;
    cin>>s>>m;
    if(s==1 && m<=9){cout<<m<<' '<<m<<endl;return 0;}
    if((m==0 && s!=1) || s*9<m)cout<<-1<<' '<<-1<<endl;
    else{
        string ss="";
        int kk=s;
        int kj=m;
        for(int i=0;i<=9;i++){
            while(ck(m-i,s-1) && m){
                ss+=(i+'0');
                s--;
                m-=i;
            }
        }
        string v="";
        int cc=kk;
         for(int i=1;i<=9;i++){
            while(ck(kj-i,kk-1) && kk){
                v+=(i+'0');
                kk--;
                kj-=i;
            }
        }
        //cout<<v.size()<<endl;
       //  cout<<v<<' '<<1<<endl;
        sort(v.begin(),v.end());
        string hj="";
        if(v.size()<cc){
            string cp="";
            for(int i=v.size();i<cc;i++)cp+='0';
            hj+=v[0];

            hj+=cp;
            //
            //cout<<cp<<endl;
            for(int i=1;i<v.size();i++)hj+=v[i];
            //cout<<hj<<endl;
        }
        else hj=v;
        //cout<<hj<<endl;
       //cout<<v<<endl;
        v=hj;
        //cout<<v<<endl;
        bool ckk=0;
        int ckj=0;
        for(int i=1;i<v.size();i++){
            //cout<<v[i]<<' ';
            if(v[i]=='0' && v[i]=='9')continue;
            int sum=v[i]-'0';
            ckj=i;ckk=0;
            for(int j=i+1;j<v.size();j++){
                int su1=v[j]-'0';
                if(sum+su1<=9){
                    sum+=su1;
                    ckk=1;
                    v[ckj]='0';
                    ckj=j;
                    v[j]=sum+'0';
                    //v[i]='0';
                }
                else{
                    if(ckk){
                        v[ckj]=sum+'0';
                    }
                    //j=i+1;
                   // cout<<j<<' '<<v[j]<<endl;;
                    break;
                }
            }
            //cout<<v[i]<<' ';
        }
        sort(v.begin()+1,v.end());
        for(int i=1;i<v.size();i++){
            if(v[i]=='0' || v[i]=='9')continue;
            int sum=v[i]-'0';
            for(int j=i+1;j<v.size();j++){
                if(v[j]!='9'){
                    int ss1=v[j]-'0';
                    int mn=min(9-ss1,sum);
                    v[j]='9';
                    sum-=mn;
                }
                else break;
            }
            v[i]=sum+'0';
        }
        sort(v.begin()+1,v.end());
        cout<<v<<endl;
        sort(ss.rbegin(),ss.rend());
        //cout<<56<<endl;
        cout<<ss<<endl;
    }
}
