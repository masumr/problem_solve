#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    multiset<int>s;
    multiset<int>::iterator it;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(multiset<int>::iterator ip=s.begin();ip!=s.end();ip++)cout<<(*ip)<<' ';
    cout<<endl;
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        it=s.upper_bound(x);
        if(it!=s.end())s.erase(it);
        for(multiset<int>::iterator ip=s.begin();ip!=s.end();ip++)cout<<(*ip)<<' ';
    cout<<endl;
    }
}
