#include<bits/stdc++.h>
using namespace std;
vector<string>str_t_int(string n){
    stringstream ss(n);
    string num;
    vector<string>v;
    while(ss>>num)v.push_back(num);
    return v;
}
string multripication(string a,int n){
    int sum=0,carry=0;
    for(int i=a.size()-1)
}
int main(){
    string s;
    while(getline(cin,s)){
        long long mx=-999999;
        //int sum=0;
        vector<string>v=str_t_int(s);
        long sum=1;
        for(int i=0;i<v.size();i++){
            sum=1;
            for(int j=i;j<v.size();j++){
                if(v[j]!=-999999){
                sum*=v[j];
                    if(mx<sum)mx=sum;
                    if(sum==0)sum=1;
                }
            }
        }
        cout<<mx<<endl;
            v.clear();
    }

}
