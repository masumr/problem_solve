#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll total;
    map <string,int>mp;
    int m,n,usd;
    string w;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin >> w >> usd;
        mp[w]=usd;
    }
    for(int k=0;k<n;k++){
        total = 0;
        while(cin>>w&&w!=".")total = total+mp[w];
        cout << total << endl;
    }
}
