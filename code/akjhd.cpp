#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a,b;
    cin>>a>>b;
    int x;
    cin>>x;
    int y=x;
    int count=1;
    for(int i=1;i<a;i++){
        cin>>x;
        if(x-y<=b){
            count++;
        }
        else count=1;
        y=x;
    }
    if(a==1) count=1;
    cout<<count<<endl;
}
