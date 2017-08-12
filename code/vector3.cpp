#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    int i,t;
    cin>>t;
    int b;
    for(i=1;i<=t;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    int sum=0;
    for(i=0;i<a.size();i++)
        sum+=a[i];
    cout<<sum<<endl;
    vector<int>::iterator it;
    it=a.begin();
    it++;
    cout<<*it<<endl;
}
