#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    int n;
    vector<int>v;
    while(ss>>n)v.push_back(n);
    cout<<v.size()<<endl;
}
