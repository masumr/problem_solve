#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=28;
ll a[N];
string s;
ll nth_value;
int feq[N];
void ini(){
    a[0]=1;
    for(int i=1;i<=20;i++){
        a[i]=a[i-1]*i;
    }
}
ll occurence(int n){
    ll now=a[n];
    int i=0;
    for(int i=0;i<26;i++)now/=a[feq[i]];
    return now;
}
void solve(int len){
    while(len){
        ll up=0;
        bool ck=0;
        for(int i=0;i<26 && !ck;i++){
            if(feq[i]){
                feq[i]--;
                ll now=occurence(len-1);
                if(now+up>=nth_value){
                    nth_value-=up;
                    ck=1;
                    printf("%c",i+'a');
                    len--;
                }
                else{
                    up+=now;
                    feq[i]++;
                }
            }
        }
        if(!ck)break;
    }
    printf("\n");
}
int main(){
    ini();
    //for(int i=0;i<10;i++)cout<<a[i]<<' ';
    int t;
    scanf("%d",&t);
    while(t--){
        cin>>s;
        scanf("%lld",&nth_value);
        //nth_value-=1;
        nth_value++;
        memset(feq,0,sizeof feq);
        int len=s.size();
       // cout<<s<<' '<<nth_value<<' '<<len<<endl;
        for(int i=0;i<len;i++){
            feq[s[i]-'a']++;
            //cout<<feq[s[i]-'a']<<' ';
        }
        //cout<<1<<endl;
        //ll nn=occurence(len);
        solve(len);
    }
}

