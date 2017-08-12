#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,sum=0;
        cin>>n;
        while(n--){
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<endl;
    }
}
