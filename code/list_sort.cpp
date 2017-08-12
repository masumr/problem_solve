#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>a;
    int t,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>b;
        a.push_front(b);
        a.push_back(b+1);
    }
    list<int>::iterator it;
    for(it=a.begin();it!=a.end();it++) {cout<<*it<<"\t";}

}
