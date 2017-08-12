#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fac[25];
int freq[30];
ll nth_value;
void fact(){
    fac[0]=1;
    for(int i=1;i<=20;i++)fac[i]=fac[i-1]*i;
}
ll occ(int len){
    ll n=fac[len];
    for(int i=0;i<=25;i++)n/=fac[freq[i]];
    return n;
}
void solve(int len){
    while(len){
        ll up=0;
        bool ck=0;
        for(int i=0;i<26 && !ck;i++){
            if(freq[i]==0)continue;
            freq[i]--;
            ll n=occ(len-1);
            if(n+up>=nth_value){
                nth_value-=up;
                ck=1;
                printf("%c",i+'a');
                len--;
            }
            else{
                up+=n;
                freq[i]++;
            }
        }
        if(!ck)break;
    }
}
int main(){
    fact();
    //for(int i=0;i<=10;i++)cout<<fac[i]<<' ';
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        string s;
        memset(freq,0,sizeof freq);
        cin>>s>>nth_value;
        //cout<<s<<' '<<nth_value<<endl;
        printf("Case %d: ",++c);
        for(int i=0;i<s.size();i++)freq[s[i]-'a']++;
        //ll jk=occ(s.size());
        if(occ(s.size())<nth_value)printf("Impossible\n");
        else{
            solve(s.size());
            printf("\n");
        }
    }

}
