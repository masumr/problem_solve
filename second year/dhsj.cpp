#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int ar[300];
    memset(ar,0,sizeof(ar));
    for(int i=0;i<a.size();i++){
        ar[(int)a[i]]++;
    }
    int c1=0,c2=0;
    for(int i='a';i<='z';i++){
        if(ar[i]%2!=0) c2++;
    }
    if(c2!=0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
