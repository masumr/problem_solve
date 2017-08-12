#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20];
    memset(a,0,sizeof a);
    for(int i=1;i<=18;i++){
        for(int j=i;j<=18;j+=i) a[j]++;
    }
    int x;
    while(cin>>x) cout<<a[x]<<endl;
}
