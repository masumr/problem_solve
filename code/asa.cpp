#include<bits/stdc++.h>
using namespace std;
int main(){
    int l1,l2,a1,a2;
    cin>>l1>>l2>>a1>>a2;
    int sum1=l2-l1;
    int ss=(a1-a2)*12;
    if(a1<=a2){
        if(a1*8>=sum1)cout<<0<<endl;
        else cout<<-1<<endl;
    }
     else{
        if(a1*4>=sum1)cout<<0<<endl;
        else{
        int sk=a1*12;
        int s2=a2*12;
        int sum=a1*8;
        sum1-=sum;
        cout<<ceil((double)sum1/ss)<<endl;
        }
    }
}
