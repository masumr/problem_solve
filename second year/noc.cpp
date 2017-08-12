#include<bits/stdc++.h>
using namespace std;
const int N=1009;
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=N;i++)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int gcd(int a,int b){return (b==0)?a:gcd(b,a%b);}
int nod(int n){
    int cnt=1;
    int k=1;
    for(int i=0;i<v.size() && v[i]*v[i]<=n;i++){
        k=1;
        while(n%v[i]==0){
            k++;
            n/=v[i];
        }
        cnt*=k;
    }
    if(n>1)cnt*=2;;
    return cnt;
}
int main(){
    sieve();
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        int n=gcd(a,b);
        //cout<<n<<endl;
        printf("%d\n",nod(n));
    }

}
