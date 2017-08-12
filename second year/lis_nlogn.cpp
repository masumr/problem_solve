#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    k=240-k;
    k/=5;
    int count=(sqrt(8*k+1)-1)/2;
    cout<<((count<n)?count:n)<<endl;
}
