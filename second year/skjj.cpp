#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int l1=a.size(),l2=b.size();
    if(a==b){
        cout<<-1<<endl;
        return 0;
    }
    cout<<max(l1,l2)<<endl;
}
