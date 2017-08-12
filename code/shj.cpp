#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a[100007];
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;i++)cin>>a[i];
    sort(a,a+n1);
    int mn=min(n3,n2);
    int mx=max(n3,n2);
    double s1=0;
    int i;
    for(i=n1-1;i>=n1-mn;i--){
        s1+=a[i];
    }
    double s2=0;
    while(i>=n1-mn-mx){
        s2+=a[i];
        i--;
    }
   // cout<<s1<<' '<<s2<<endl;
    printf("%.6lf\n",(s1/mn)+(s2/mx));
}
