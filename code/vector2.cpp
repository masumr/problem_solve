#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(5);
    a.push_back(4);
    a.push_back(3);
    cout<<"vector is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    a.pop_back();
    cout<<"vector is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    a.insert(a.begin()+1,6);
    cout<<"vector is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    a.erase(a.begin()+2);
    cout<<endl;
    cout<<"vector is: ";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    if(a.empty())
    {
        cout<<"this value is empty"<<endl;
    }
    else
        cout<<"this value is not empty"<<endl;
    a.clear();
    if(a.empty())
    {
        cout<<"this value is empty"<<endl;
    }
    else
        cout<<"this value is not empty"<<endl;




}
