#include<bits/stdc++.h>

using namespace std;
int digit(int n){
    double sum=0;
    for(int i=1;i<=n;i++)sum+=log10(i);
    return floor(sum)+1;
}
int main(){
    int n;
    while(cin>>n)cout<<digit(n)<<endl;
}
