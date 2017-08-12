#include<bits/stdc++.h>
using namespace std;
#define For(i,a) for(int i=0;i<a;i++)
vector<int>convert(string line){
    stringstream ss(line);
    int num;
    vector<int>v;
    while(ss>>num)v.push_back(num);
    return v;
}
int main(){
    string line;
    getline(cin,line);
    vector<int>a;
    a=convert(line);
    int sum=0;
    For(i,a.size())sum+=a[i];
    cout<<sum<<endl;
}
