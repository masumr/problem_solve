#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[1001][6];
    int count=0,x1,x2=0,x3=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++) cin>>a[i][j];
        if((a[i][0]=='O' && a[i][1]=='O') && !count){
            count++;
            a[i][0]='+';
            a[i][1]='+';
        }
        if((a[i][3]=='O' && a[i][4]=='O') && !count){
            count++;
            a[i][3]='+';
            a[i][4]='+';
        }
    }
    if(!count) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++)cout<<a[i][j];
            cout<<endl;
        }
    }
}
