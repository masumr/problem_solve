#include<bits/stdc++.h>
using namespace std;
int main(){
    char c[2];
    cin>>c;
    if((c[0]=='a' || c[0]=='h') && (c[1]=='1' || c[1]=='8')) cout<<3<<endl;
    else if(c[0]=='a' || c[0]=='h' || c[1]=='1'||c[1]=='8') cout<<5<<endl;
    else cout<<8<<endl;
}
