#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    getchar();
    for(int k=0;k<t;k++){
        cout<<endl;
        int n,m;
        cin>>n>>m;
        int a[100000];
        for(int i=1;i<=n;i++) cin>>a[i];
        printf("Case %d:\n",++c);
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
             int count=0;
            for(int i=x;i<=y;i++){
                    for(int j=i+1;j<=y;j++)
                    if(a[i]%a[j]==0 && a[i]/a[j]>1)count++;
            }
            cout<<count<<endl;
        }
    }
}
