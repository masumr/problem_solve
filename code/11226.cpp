#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=500007;
bitset<size>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=size;i+=2)if(!p[i])for(int j=i*i;j<=size;j+=(i<<1))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=size;i+=2)if(!p[i])v.push_back(i);
}
template<typename T>
T sod(T n){
    T sum=0;
    for(int i=0;i<v.size() && v[i]*v[i]<=n;i++)if(n%v[i]==0){
        while(n%v[i]==0){
            sum+=v[i];
            n/=v[i];
        }
    }
    if(n>1)sum+=n;
    return sum;
}
int a[500007];
int main(){
    sieve();
    for(int i=2;i<=500000;i++){
        a[i]=sod(i);
    }
    //cout<<a[4]<<' '<<a[8]<<endl;
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y) swap(x,y);
        int mx=0;
        for(int i=x;i<=y;i++){
            int z=i;
            int count=0;
            while(z!=a[z]){
                z=a[z];
                count++;
            }
            mx=max(mx,count);
        }
        printf("Case #%d:\n%d\n",++c,mx+1);

    }
}
