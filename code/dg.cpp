#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int t,c=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printf("Case #%d: ",++c);
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        while(n){
            if(n<0){
                n=-n;
                v.push_back(n%2);
                n=(n/2)+(n%2);
            }
            else{
                v.push_back(n%-2);
                n/=-2;
            }
        }
        for(int i=v.size()-1;i>=0;i--)cout<<v[i];
        cout<<endl;
        v.clear();
    }
}

