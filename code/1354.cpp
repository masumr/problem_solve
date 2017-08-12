#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    for(int i=1;i<=1000;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0) count++;
        }
        v.push_back(count);
    }
    sort(v.begin(),v.end());
    int t,c=0;
    cin>>t;
    while(t--){
        int n;
        cin>>a;

    }
}
