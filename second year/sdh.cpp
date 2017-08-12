#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=99999;
    cout<<n<<endl;
    int s1=1,s2=1;
    cout<<s1<<' '<<s2<<' ';
    for(int i=1;i<=n;i++){
        int tt=s1;
        s1=s1+s2;
        s2=s1;
        cout<<s1<<' ';
    }
    //cout<<"asdjhsad"<<endl;
}
