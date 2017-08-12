#include<bits/stdc++.h>
using namespace std;
const int size=123456;
int a[size];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        int mx=-12345678;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        int lo=0,hi=1;
        while(hi<n){
            mx=max(mx,a[lo]-a[hi]);
            if(a[lo]<a[hi])lo=hi;
            hi++;
        }
        printf("%d\n",mx);

    }
}
