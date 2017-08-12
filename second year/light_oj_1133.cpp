#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        char a;
        while(m--){
            cin>>a;
            if(a=='P'){
                int x,y;
                cin>>x>>y;
                swap(v[x],v[y]);
            }
            else if(a=='S'){
                int x;
                cin>>x;
                for(int i=0;i<n;i++) v[i]+=x;
            }
            else if(a=='M'){
                int x;
                cin>>x;
                for(int i=0;i<n;i++) v[i]*=x;
            }
            else if(a=='D'){
                int x;
                cin>>x;
                for(int i=0;i<n;i++) v[i]/=x;
            }
            else reverse(v.begin(),v.end());
        }
        printf("Case %d:\n",++c);
        for(int i=0;i<n;i++){
            cout<<v[i];
            if(i!=n-1) cout<<' ';
        }
        cout<<endl;
        v.clear();
    }
}
