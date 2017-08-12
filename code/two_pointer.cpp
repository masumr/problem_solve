#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
    int x,y;
    cin>>x>>y;
    int low=0,hi=0;
    for(int i=0;i<x;i++)cin>>a[i];
    int sum=0,mx=0;
    while(hi<x){
        while(sum+a[hi]<=y && hi<x)sum+=(a[hi++]);
        mx=max(mx,hi-low);
        if(sum+a[hi]>y)sum-=a[low++];
         mx=max(mx,hi-low);
    }
    cout<<mx<<endl;
}
