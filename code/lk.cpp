#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int b;
    for(int i=0;i<3;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    a.insert(a.begin()+2,5);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    a.erase(a.begin()+1);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"\t";
    cout<<endl;

}
