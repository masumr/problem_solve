#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(3);
    v=(12,23);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
