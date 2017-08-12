#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        printf("Case %d:\n",++c);
        if(n==1) cout<<0<<endl;
        else{
            if(mod(n,m)==0){
                ll count=0;
                int s=1;
                for(int i=2;i<=n;i++){
                    s*=i;
                    if(s%m!=0) s%=m;
                    else{
                        while(s%m==0){
                            count++;
                            s/=m;
                        }
                    }
                }
                cout<<s<<endl;
                cout<<count<<endl;
            }
            else cout<<"Impossible to divide"<<endl;
        }
    }
}
