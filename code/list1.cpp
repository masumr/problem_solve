#include<iostream>
#include<list>
#include<algorithm>
#include<stdlib>
#include<>
using namespace std;
int main()
{
    list<int>a;
    a.push_front(12);
    a.push_front(1);
    a.push_front(2);
    a.push_front(120);
    a.push_front(12);
    list<int>::iterator it;
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    a.sort();
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    a.unique();
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    a.remove(12);
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<" ";
    cout<<endl;


}
