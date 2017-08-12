#include<bits/stdc++.h>
using namespace std;
set<int>s;
int v[100007];
int main(){
    int t,c=0;
     int x,y;
    cin>>t;
    while(t--){
        memset(v,0,sizeof v);
        int n;
        cin>>n;
        int xx=0;
        for(int i=0;i<n-1;i++){
            cin>>x>>y;
            if(!v[x]){
                xx++;
                v[x]=1;
            }
            if(!v[y]){
                xx++;
                v[y]=1;
            }

        }
        //cout<<xx<<endl;
        printf("Case %d: ",++c);
        if(xx%2==0)cout<<0<<endl;
        else{
           int co=xx;
           int count=1;
           //if(co%2){
                for(int i=2;i<=co;i++){
                    if(i%2&&(co-i)%2==0){
                        count++;
                        //if(i-1==co/2)count++;
                        //cout<<i<<' '<<co/2<<endl;
                    }

                }
                //count++;
           //}
           cout<<count<<endl;
        }
    }
}
