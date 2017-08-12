#include<bits/stdc++.h>
using namespace std;
const int N=2134;
int a[N];
string ch[N];
vector<int>v;
int main(){
   int t,c=0;
   scanf("%d",&t);
   while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int i=0;i<n;i++)cin>>ch[i];
        for(int i=1;i<n;i++){
            if(ch[i]==ch[i-1]){
                a[i]+=a[i-1];
                a[i-1]=0;
            }
        }
        int cnt=0,rem=0;
        for(int i=0;i<n;i++){
            //cout<<a[i]<<' ';
            if(a[i]>0){
                //cout<<a[i]<<' ';
                int ss=a[i]/k;
                if(ss%2){
                    cnt+=ss/2+1;
                    if(a[i]%k)rem=0;
                    else{
                       rem=k;
                    }
                }
                else{
                    cnt+=ss/2;
                    if(a[i]%k){
                        //cout<<a[i]%k<<' '<<i<<' '<<a[i]<<endl;;
                        cnt++;
                        rem=k;
                    }
                    else rem=0;
                }
                //cout<<rem<<endl;
                //a[i+1]-=rem;
            }
            if(i+1<n && a[i+1]>0){
                a[i+1]-=rem;
                rem=0;
            }
        }
        rem=0;
        //if(rem)cnt++;
        printf("Case %d: %d\n",++c,cnt);

   }
}
