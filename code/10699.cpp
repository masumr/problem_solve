#include<bits/stdc++.h>
using namespace std;
const int size=1000001;
bitset<size>p;
map<int,int>mp;
void sieve(){
    mp[2]=1;
    for(int i=3;i<sqrt(size)+1;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=i)
                p[j]=1;
        }
    }
    for(int i=3;i<=size;i+=2){
        if(p[i]==0) mp[i]=1;
    }
}
int main(){
    sieve();
    int n;
    while(cin>>n){
        if(n==0) break;
        int c1=1,c2=1;
        int i=n;
        while(1){
            c1++;
            if(mp[i]==1)
                break;
            i++;
        }
        int j=n;
        while(1){
            c2++;
            if(mp[j]==1)
                break;
            j--;
        }
        cout<<c1<<' '<<c2<<endl;
    }
}
