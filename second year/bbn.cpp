#include<bits/stdc++.h>
using namespace std;
int n,j;
string a,b;
int main()
{
    cin>>n;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    j=n-1;
    for(int i=n-1; i>=0; i--){
        if(a[i]<=b[j])j--;
    }
    cout<<j+1<<endl;
    j=0;
    for(int i=0; i<n; i++){
        if(b[i]>a[j])j++;
    }
    cout<<j<<endl;
}
