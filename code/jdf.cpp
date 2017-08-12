#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x=0;
    for(int i=1;i<3;i++){
        cin>>a>>b;
        x=x+(a+b)/10 ? 1:0;
    }
    cout<<x;
}
