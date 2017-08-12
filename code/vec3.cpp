#include<iostream>
#include<vector>
#include<stdlib.h>
#include<numeric>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>num;
    int a;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        num.push_back(a);
    }
    int sum=0;
    int max=0;
    cout<<"addition value is: "<<accumulate(num.begin(),num.end(),0)<<endl;
    cout<<"maximum value is: "<<*max_element(num.begin(),num.end())<<endl;
    cout<<"minimum value is: "<<*min_element(num.begin(),num.end())<<endl;
    sort(num.begin(),num.end());
    cout<<"sort later for this value: ";
    for(int i=0;i<num.size();i++)
        cout<<num[i]<<" ";
    cout<<endl;
    num.insert(num.begin()+2,5);
    for(int i=0;i<num.size();i++)
        cout<<num[i]<<" ";
    cout<<endl;
    num.erase(num.begin()+0);
    for(int i=0;i<num.size();i++)
        cout<<num[i]<<" ";
    cout<<endl;
    int sum1=accumulate(num.begin(),num.end(),0);
    cout<<sum1<<endl;
