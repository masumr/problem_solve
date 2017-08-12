#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    int a;
    for(int i=0;i<10;i++){
        cin>>a;
        vec.push_back(a);
    }
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<' ';
    cout<<endl;
    sort(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<' ';
}
