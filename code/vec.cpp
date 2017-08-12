#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++)v.push_back(rand()%100);
    cout<<"Initial vector: ";

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    cout<<"sum of all element: "<<accumulate(v.begin(),v.end())<<endl;
    cout<<"Min element of vector: "<<*min_element(v.begin(),v.end())<<endl;
    cout<<"Max element of vector: "<<*max_element(v.begin(),v.end())<<endl;

    sort(v.begin(),v.end());

    cout<<"After sort: ";
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
