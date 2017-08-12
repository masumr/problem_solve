#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a;
    cin>>n>>a;
    int c1,c2,count=0;
    for(int i=3;i<a.size();i++){
        if(i%n==0)if(a[i-1]==a[i-2]&& a[i-1]==a[i-3])count++;
    }
    cout<<count<<endl;
}
