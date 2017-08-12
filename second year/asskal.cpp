#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main(){
    int t;
    cin>>t;
    int n[1007];
    memset(n,0,sizeof n);
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        s.insert(x);
        n[x]++;
    }
    if(s.size()>ceil((double)n/2)+1)cout<<"Impossible"<<endl;
    else{
        if(t%2){
            int mn=0;
            for(int i=1;i<=1000;i++){
                if(n[i]){
                    n[i]--;
                    mn=i;
                    break;
                }
            }
            int count=0;

        }
    }

}
