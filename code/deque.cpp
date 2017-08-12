#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>a;
    a.push_front(5);
    a.push_front(4);
    a.push_front(3);
    cout<<"deque is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    a.pop_front();
    cout<<"deque is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    a.pop_front();
    cout<<"deque is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    a.pop_front();
    cout<<"deque is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;

}
