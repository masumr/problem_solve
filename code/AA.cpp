#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    vector<int>v;
    if(k==1){
        cout<<n<<endl;
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cnt++;
            v.push_back(i);
            n/=i;
            if(cnt==k-1 && n>1){
                cnt++;
                v.push_back(n);
                n=1;
                break;
            }
        }
        if(cnt==k)break;
    }
    if(n>1){
        cnt++;
        v.push_back(n);
    }
    if(cnt!=k)cout<<-1<<endl;
    else {
        for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
        cout<<endl;
    }
}
