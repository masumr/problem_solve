#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=1001;
int a[1000001],s[1000001];
bitset<size>p;
int v[200];
int k;
/*void sieve(){
    for(int i=3;i*i<=size;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=(i*2)) p[j]=1;
        }
    }
    v[0]=2;
    k=1;;
    for(int i=3;i<=size;i+=2){
        if(p[i]==0) v[k++]=i;
    }
}
int NOD(int n){
    int sum=0;
    for(int i=0;i<=k;i++){
        if(n%v[i]==0){
            int count=1;
            while(n%v[i]==0){
                count++;
                n/=v[i];
            }
            sum+=count;
        }
    }
    if(n>1) sum+=2;
    return sum;
}*/
int binary_search(int lo,int hi,int n){
    if(lo>=hi) return lo;
    int mid=(lo+hi)/2;
    if(a[mid]>n) return binary_search(lo,mid,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    int t;
    s[1]=1;
    memset(s,0,sizeof s);
     for( int i = 2; i <= 1000001; i++ ){
            for( int j = i; j <= 1000001; j += i ){
                s[j]++;
            }
    }
    cout<<s[12]<<endl;
    a[0]=1;
    for(int i=1;i<=1000001;i++) a[i]=a[i-1]+s[a[i-1]];
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

    }

}
