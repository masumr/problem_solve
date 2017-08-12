#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>a;
    int n;
    for(int i=0;i<3;i++){
        cin>>n;
        a.insert(n);
    }
    set<int>::iterator it;
    it=a.find(4);
    a.erase(it);
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<' ';
}
