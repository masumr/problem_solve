#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int t;
    cin>>t;
    getchar();
    for(int i=1;i<=t;i++){
        //getchar();
        getline(cin,a);
        getline(cin,b);
        stringstream s1(a);
        stringstream s2(b);
        vector<int>v1;
        vector<string>v2;
        int num;
        while(s1>>num)v1.push_back(num);
        string num1;
        while(s2>>num1)v2.push_back(num1);
        map<int,string>v3;
        for(int i=0;i<v1.size();i++)v3[v1[i]-1]=v2[i];
        for(int i=0;i<v1.size();i++)cout<<v3[i]<<endl;
        v1.clear();v2.clear();v3.size();
    }
}
