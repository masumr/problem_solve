#include<bits/stdc++.h>
using namespace std;
const int size=40009;
typedef long long int ll;
int len(ll n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
bool ck(int n){
    ll s=n*n;
    ll sum=1;
    ll l=len(s);
    //cout<<s<<endl;
    for(int i=0;i<l;i++){
        sum*=10;
        //s/=10;
        //cout<<s/sum<<' '<<s%sum<<endl;
        if((s/sum)+(s%sum)==n && (s/sum && s%sum))return true;
    }
    return false;
}
int a[size];
int main(){
    int t,c=0;
    scanf("%d",&t);
    a[1]=0;
    //cout<<ck(370)<<endl;
    for(int i=2;i<=size;i++){
        if(ck(i)){
            a[i]=i;
        }
        else a[i]=0;
    }
    while(t--){
        int aa,b;
        scanf("%d%d",&aa,&b);
        printf("case #%d\n",++c);
        bool cc=0;
        for(int i=aa;i<=b;i++){
            if(a[i]){cc=1;printf("%d\n",i);}
        }
        if(!cc)printf("no kaprekar numbers\n");
        if(t)printf("\n");
        //for(int i=)
    }
}
