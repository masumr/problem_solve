#include<bits/stdc++.h>
#define For(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int main()
{
    int t1,t2,sum,arr[100],i,count=0;
    cin>>t1>>t2;
    For(i,1,t1){cin>>arr[i];}
    For(i,1,t1){
        if(arr[i]==1 &&  2*t2-i>0 && 2*t2-i<=t1 && arr[i]==arr[2*t2-i])
            count++;
        if(arr[i]==1 && (2*t2-i<=0 || 2*t2-i>t1))
            count++;
    }
    cout<<count<<endl;
}
