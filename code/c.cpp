#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int d1=0,d2=0;
    bool ck=0,c1=0,cc;
    int c,d;
    cin>>n;
    while(n--){
        cin>>c>>d;
        if(d==2)ck=1;
        if(d==1)c1=1;
        if(d==1){
            if(d2==0)d1+=c;
            else{
                if(d1>d2)d1+=c;
                else{
                    cout<<"Impossible"<<endl;
                    break;
                }
            }
        }
        else {
            if(d1==0)d2+=c;
            else{
                if(d2>d1)d2+=c;
                else{
                    cout<<"Impossible"<<endl;
                    break;
                }
            }
        }
    }
    if(ck==0)cout<<"Infinity"<<endl;
    else if(c1==0)cout<<1900<<endl;
    else{
        int s=d1-d2;

    }
}
