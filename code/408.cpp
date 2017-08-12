#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main(){
    int a,b,c=0;
    while(cin>>a>>b){
        int sum=0;
        for(int i=1;i<b;i++){
            sum=(sum+a)%b;
            s.insert(sum);
        }
        printf("%10d%10d    ",a,b);
        if(s.size()==b-1) cout<<"Good Choice"<<endl;
        else cout<<"Bad Choice"<<endl;
        cout<<endl;
        s.clear();
    }
    return
}
