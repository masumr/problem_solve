#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        string b,a,s;
        cin>>a>>b;
        ll sum=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='.'){
                while(sum!=0){
                    s+=(char)(sum%2+48);
                    sum/=2;
                }
                s+='.';
            }
            else sum=(sum*10)+(a[i]-48);
        }
        cout<<s<<endl;
        printf("Case %d: ",++c);
        if(s==a) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        s.clear();
    }
}
