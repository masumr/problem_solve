#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[500007];
ll b[500007];
int main(){
    int n;
    cin>>n;
    cin>>a[0];
    ll sum=a[0];
    b[0]=a[0];
    if(n==2){
        cout<<0<<endl;
    }
    else{
        ll co=0;
        if(a[0]==0)co++;
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]==0)co++;
            sum+=a[i];
            b[i]+=(b[i-1]+a[i]);
        }
        if(co==n){
            cout<<(n*3)+1<<endl;
        }
        else{
        //cout<<sum<<endl;
            if(sum%3==0){
                sum/=3;
                ll count=0,count1[3]={0},sum2=0;
               for(int i=0;i<n;i++){
                    if(b[i]-sum2==sum){
                        count++;
                        int j=i+1;
                        while(a[j]==0 && j<n-1){
                            count1[count-1]++;
                            j++;
                        }
                        sum2=b[i];
                    }
                    //if(b[i+1]-sum2==0 && sum!=0)count++;
                    //if(b[i+1]-sum2==sum)count1++;
               }
               //cout<<count1[0]<<' '<<count1[1]<<' '<<count1[2]<<endl;

              if(count>=3){
               ll ans=1;
                for(int i=0;i<3;i++){
                    if(count1[i]!=0){
                        if(count1[i]==1)ans++;
                        else
                          ans+=((count1[i]*(count1[i]-1))/2);
                    }
                }
               cout<<ans<<endl;
              }
              else cout<<0<<endl;
            }
            else cout<<0<<endl;
        }
    }

}
