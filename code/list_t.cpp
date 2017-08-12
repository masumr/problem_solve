#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>a;
    int n;
    for(int i=0;i<5;i++){
        cin>>n;
        a.push_back(n);
    }
    list<int>::iterator it;
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<' ';
    cout<<endl;
    a.sort();
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<' ';
    cout<<endl;
    a.unique();
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<' ';
    list<int>b;
    int x;
    for(int i=0;i<3;i++)
        {
            cin>>x;
            b.push_back(x);
        }
    a.splice(a.end())
}
