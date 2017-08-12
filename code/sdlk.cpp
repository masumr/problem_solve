#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=5100;
ll a[N][N];
ll b[30000];
ll d[30000];
int main(){
    int n,k1,k2;
    scanf("%d",&n);
    if(n==1){
        printf("1\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%lld",&a[i][j]);
            if(a[i][j]==0){
                k1=i;
                k2=j;
            }
        }
    }
    //cout<<k1<<' '<<k2<<endl;
    ll sum1=0,sum2=0;
    ll s1=0,s2=0;
    for(int i=0;i<n;i++){
        s1+=a[k1][i];
        //cout<<a[i][k2]<<' ';
        s2+=a[i][k2];
    }
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
    sum1=0,sum2=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        sum1+=a[i][i];
        sum2+=a[i][j];
        j--;
    }
    b[k++]=sum1;
    b[k++]=sum2;
    ll c[111111];
    map<ll,int>mp;
    int ck=0;
    for(int i=0;i<k;i++){
        //cout<<b[i]<<' ';
        if(mp[b[i]]==0)c[ck++]=b[i];
        mp[b[i]]++;
    }
    //cout<<mp[s1]<<endl;
    //cout<<endl;
    if(ck==2){
        ll mx=(s1==c[0])?c[1]:c[0];
        //cout<<s1<<' '<<s2<<endl;
        //cout<<c[0]<<' '<<c[1]<<endl;
        ll kk=abs(c[0]-c[1]);
        k=0;
        //cout<<kk<<endl;
        for(int i=0;i<n;i++){
            sum1=0,sum2=0;
            for(int j=0;j<n;j++){
                sum1+=a[i][j];
                sum2+=a[j][i];
                if(a[i][j]==0){
                    sum1+=kk;
                }
                if(a[j][i]==0)sum2+=kk;

            }
            //cout<<sum1<<' '<<sum2<<endl;
            b[k++]=sum1;
            b[k++]=sum2;
        }
        sum1=0,sum2=0;
        j=n-1;
        for(int i=0;i<n;i++){
            sum1+=a[i][i];
            if(a[i][i]==0)sum1+=kk;
            sum2+=a[i][j];
            if(a[j][i]==0)sum2+=kk;
            j--;
        }
        b[k++]=sum1;
        b[k++]=sum2;
        bool ck=0;
        for(int i=1;i<k;i++){
            //cout<<b[k]<<' ';
            if(b[0]!=b[i]){
                printf("-1\n");
                ck=1;
                return 0;
            }
        }
        if(!ck)printf("%lld\n",kk);
    }
    else printf("-1\n");
}
