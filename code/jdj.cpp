#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
const int N=510;
ll a[N][N];
ll b[N];
ll c[N];
int main(){
    int n,k1,k2;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                k1=i;
                k2=j;
            }
        }
    }
    ll sum1=0,sum2=0;
    int k=0;
    for(int i=0;i<n;i++){
        sum1=0,sum2=0;
        for(int j=0;j<n;j++){
            sum1+=a[i][j];
            sum2+=a[j][i];
        }
        b[k++]=sum1;
        b[k++]=sum2;
    }
    int count=0;
    int c1=0;
    int mn=0;
    sort(b,b+k);
    ll c[111];
    map<ll,int>mp;
    int ck=0;
    for(int i=0;i<k;i++){
        //cout<<b[i]<<' ';
        if(!mp[b[i]])c[ck++]=b[i];
        mp[b[i]]=1;
    }
    if(ck==2){
        sort(c,c+ck);
        //cout<<c[0]<<' '<<c[1]<<endl;
        cout<<c[1]-c[0]<<endl;
    }
    else cout<<-1<<endl;
}
