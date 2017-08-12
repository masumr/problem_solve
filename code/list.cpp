#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(3);
    l.push_back(2);
    l.push_back(1);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    list<int>::iterator it;
    for(it=l.begin(),it!=l.end();++it)
        cout<<*it<<' ';

}
