#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    int len=a.size()-1;
    while((a[len]-48)%2==1)len--;
    while(1){
        if(a.size()==0)break;
        int sum=0,s;
        int count=0;
        for(int i=1;i<=3 && i<=a.size();i++){
            sum+=(int)(a[a.size()-i]-48)*pow(10,i-1);
            //cout<<sum<<' ';
            if(!count && ((int)a[a.size()-i]-48)%2){
                count++;
                s=a.size()-i;
                //s--;
            }
        }

        if(sum%8==0){
            break;
        }
        else{
            if(count==1) a.erase(a.begin()+s);
            else a.erase(a.begin()+(a.size()-1));
        }
        if(a.size()==0)break;
    }
    if(a.size()==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<a<<endl;
    }
}
