#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){while(b)b^=a^=b^=a%=b;return a;}
int main(){
    int n;
    cin>>n;
    //n--;
    int x,y;
    cin>>y;
    for(int i=1;i<n;i++){
        cin>>x;
        y=gcd(y,x);
    }
    cout<<y*n;

}
