#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n>m+1)cout<<-1<<endl;
    else if(m>n*2+2)cout<<-1<<endl;
    else{
        if(n<m){
                //cout<<'x'<<endl;
                while(m-n>1){
                    cout<<11;
                    m-=2;
                    if(n){
                        cout<<0;
                        n--;
                    }
                    else break;
                    //cout<<m<<' '<<n<<endl;
                }
                //cout<<m<<' '<<n<<endl;
                while(n!=0 && m!=0){
                    cout<<10;
                    n--;
                    m--;
                }
                if(m)cout<<1<<endl;
            }
        else if(n>=m){
            for(int i=1;i<=m+n;i++){
                if(i%2)cout<<0;
                else cout<<1;
            }
            cout<<endl;
        }
    }
}
