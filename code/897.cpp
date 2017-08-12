#include<bits/stdc++.h>
using namespace std;
int a[] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};
int binary_search(int lo,int hi,int n){
    if(lo>=hi) return lo;
    int mid=(lo+hi)/2;
    if(a[mid]>=n)return binary_search(lo,mid,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    int n;
    while(scanf("%d",&n)&& n!=0){
        if(n>=1000)printf("0\n");
        else{
            //cout<<1<<endl;
            int t=binary_search(0,22,n);
            while(a[t]<=n)t++;
            int m=1;
            while(n){
                m*=10;
                n/=10;
            }
            if(a[t]<m)printf("%d\n",a[t]);
            else printf("0\n");
        }
    }

}
