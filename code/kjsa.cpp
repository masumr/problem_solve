#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={4,7,44,47,74,77,444,447,474,477,777,774,747,744};
    sort(a,a+14);
    int n;
    cin>>n;
    bool ck=0;
    for(int i=0;i<14;i++){
        if(n%a[i]==0){
            ck=1;
            break;
        }
    }
    if(ck)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
