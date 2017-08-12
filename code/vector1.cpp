#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<char>a;
    int i,t;
    char n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        a.push_front(n);
        a.push_back(n);
    }
    list<char>::iterator it;
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<' ';
}
