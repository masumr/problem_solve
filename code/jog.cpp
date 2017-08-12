#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(5);
    a.push_back(18);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int sum=accumulate(a.begin(),a.end(),0);
    int product=accumulate(a.begin(),a.end(),1,multiplies<int>());
    cout<<sum<<endl<<product<<endl;
}
