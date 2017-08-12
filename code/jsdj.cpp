#include<bits/stdc++.h>
using namespace std;
const int n=1234;
int a[n];
int main(){
    int nn;
    cin>>nn;
    bool ck=0;
    int count=0,c2=0;
    for(int i=0;i<nn;i++){
        cin>>a[i];if(!a[i]){
            c2++;
            ck=1;
        }
        else count++;
    }
    if(!ck)cout<<-1<<endl;
    else{
        int sum=0;
        for(int i=0;i<nn;i++){
            sum+=a[i];
        }
        while(count){
            if(sum%9==0){
                //cout<<1<<endl;
                break;
            }
            else if(count){
                sum-=5;
                count--;
            }
        }
        if(sum==0){cout<<0<<endl;return 0;}
        //cout<<sum<<endl;
        for(int i=1;i<=count;i++)cout<<5;
        for(int i=1;i<=c2;i++)cout<<0;
    }
}
