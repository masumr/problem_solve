#include<stdio.h>
const int N=10000;
int a[N];
bool binary_search(int lo,int hi,int n){
    if(lo>hi)return false;
    if(lo==hi)return true;
    int mid=(lo+hi)/2;
    if(a[mid]>n)return binary_search(lo,mid-1,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    int n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    if(binary_search(0,t-1,n)==0)printf("NOT FOUND\n");
    else printf("FOUND\n");
}
