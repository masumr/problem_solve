#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[11];
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        sort(a,a+strlen(a));
        cout<<a<<endl;
        while(next_permutation(a,a+strlen(a))){
            cout<<a<<endl;
        }
        cout<<endl;
    }
}
