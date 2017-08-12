
#include<bits/stdc++.h>
using namespace std;
const int N=1234;
int a[N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        int sum=0,i;
        for(i=n-1;i>=3;i-=2)
            sum+=min(a[1]+a[0]+a[i]+a[1],a[i]+a[0]+a[i-1]+a[0]);
        if(i==2)sum+=a[0]+a[1]+a[2];
        else if(i==1)sum+=a[1];
        else if(i==0)sum+=a[0];
        printf("%d\n",sum);
        for(int i=n-1;i>=3;i-=2){
            int a1=a[1]+a[0]+a[  i]+a[1];
            int a2=a[i]+a[0]+a[i-1]+a[0];
            if(a1<a2)printf("%d %d\n%d\n%d %d\n%d\n",a[0],a[1],a[0],a[i-1],a[i],a[1]);
            else printf("%d %d\n%d\n%d %d\n%d\n",a[0],a[i-1],a[0],a[0],a[i],a[0]);
        }
        if (i == 2) printf("%d %d\n%d\n%d %d\n",a[0],a[1],a[0],a[0],a[2]);
        else if (i == 1) printf("%d %d\n",a[0],a[1]);
        else if (i == 0) printf("%d\n",a[0]);
        if(t)printf("\n");
        /*if(n==1){
            cout<<a[0]<<endl;
            cout<<a[0]<<endl;
        }
        else if(n==2){
            cout<<a[1]<<endl;
            cout<<a[0]<<' '<<a[1]<<endl;
        }
        else{
           // for(int i=0;i<n;i++)cout<<a[i]<<' ';cout<<endl;
            int ll=a[1]+a[0];
           int sum=a[1];
           bool ck=0;
           if(n&1){
                n--;
                ck=1;
           }
           //cout<<a[0]<<' '<<a[1]<<endl;
           v.push_back(make_pair(a[0],a[1]));
           for(int i=2;i<n;i+=2){
                v.push_back(make_pair(a[i],a[i+1]));
                v.push_back(make_pair(a[0],a[1]));
                sum+=ll+a[i+1]+a[1];
           }
           if(ck){
                sum+=a[0]+a[n];
                v.push_back(make_pair(a[0],a[n]));
           }
           cout<<sum<<endl;
           for(int i=0;i<v.size();i++){
                if(i==0)cout<<v[i].first<<' '<<v[i].second<<endl;
                else{
                    if(v[i].first==a[0] && v[i].second==a[1]){
                        cout<<a[1]<<endl<<a[0]<<' '<<a[1]<<endl;
                    }
                    else{
                        cout<<a[0]<<endl<<v[i].first<<' '<<v[i].second<<endl;
                    }
                }
           }
            v.clear();
           for(int i=2;i<n-2;i+=2){
                if((i/2)%2){
                    sum+=a[i+1]+a[1];
                }
                else{
                    sum+=a[i+1]+ll+a[0];
                }
           }
           if(n>=3){
            sum+=a[1]*2+a[n-1];
           }
           if(ck){
                sum+=a[0]*2+a[n];
                if(n==2)sum-=2*a[0];
           }
           cout<<sum<<endl;
           cout<<a[0]<<' '<<a[1]<<endl<<a[0]<<endl;
           for(int i=2;i<n-2;i+=2){
                //cout<<i<<endl;
                if((i/2)%2){
                    cout<<a[i]<<' '<<a[i+1]<<endl<<a[1]<<endl;
                }
                else{
                    cout<<a[i]<<' '<<a[i+1]<<endl<<a[0]<<endl;
                }
                }
                if(n>3){cout<<a[n-2]<<' '<<a[n-1]<<endl<<a[1]<<endl;
                    cout<<a[0]<<' '<<a[1]<<endl;
                }
                if(ck){
                    if(n!=2)cout<<a[0]<<endl;
                    cout<<a[0]<<' '<<a[n]<<endl;
                }

        }*/

    }
}
