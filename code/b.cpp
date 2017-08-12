#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t;
    cin>>t;
    string s;
    bool ck=0,cc=0;
    int sum=0,s1=0;
    for(int i=0;i<t;i++){
        cin>>n>>s;
        if(s!="South" && i==0)ck=1;
        //cout<<n<<' ';
        if(s=="South")sum+=n;
        else if(s=="North")sum-=n;
        else{
            if(sum==20000 || sum==0){
                ck=1;
            }
        }
        if(sum>20000 || sum<0){
                ck=1;
        }

    }
    //cout<<sum<<' '<<ck<<endl;
    if(ck)cout<<"NO"<<endl;
    else{
        if(sum==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
