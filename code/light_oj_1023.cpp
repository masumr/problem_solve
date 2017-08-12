#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,t,c=0;
    cin>>t;
    while(t--){
        char a[100];
        cin>>n>>k;
        int x=0;
        printf("Case %d:\n",++c);
        for(int i=65;i<=65+n;i++)
        {
            a[x++]=(char)i;
        }
        for(int i=0;i<n;i++) cout<<a[i];
        cout<<endl;
        int count=1;
        while(next_permutation(a,a+n) && count<k){
            count++;
            for(int i=0;i<n;i++) cout<<a[i];
            cout<<endl;
        }
    }
}
