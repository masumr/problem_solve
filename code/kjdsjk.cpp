#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int sum=n;
    while(p>1){
        if(p%2)sum=sum*n;
        sum=sum*sum;
        p/=2;
    }
    cout<<sum<<endl;
}
