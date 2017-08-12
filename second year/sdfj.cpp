#include<bits/stdc++.h>
using namespace std;
const int N=101;
int b[N],g[N];
int main(){
    int n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++)cin>>b[i];
    cin>>n2;
    for(int i=0;i<n2;i++)cin>>g[i];
    sort(b,b+n1);
    sort(g,g+n2);
    int l1=0,l2=0,cnt=0;
    while(l1<n1 && l2<n2){
        if(abs(b[l1]-g[l2])<=1){
            cnt++;
            l1++;l2++;
        }
        else{
            if(b[l1]<g[l2])l1++;
            else l2++;
        }
    }
    cout<<cnt<<endl;
}
