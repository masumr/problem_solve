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
        vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]!=0)v.push_back(a[i]);
        }
        int cnt=0,rem=0;
        for(int i=0;i<v.size();i++){
            int ss=v[i]/k;
                if(ss%2){
                    cnt+=ss/2+1;
                    if(v[i]%k)rem=0;
                    else{
                       rem=k;
                    }
                }
                else{
                    cnt+=ss/2;
                    if(v[i]%k){
                        //cout<<a[i]%k<<' '<<i<<' '<<a[i]<<endl;;
                        cnt++;
                        rem=k;
                    }
                    else rem=0;
                }
                if(i+1<v.size()ŝ)v[i+1]-=rem;
        }
        v.clear();
        printf("Case %d: %d\n",++c,cnt);

   }
}
