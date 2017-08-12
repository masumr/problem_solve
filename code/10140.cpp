#include<bits/stdc++.h>
using namespace std;
typedef long long int ul;
const ul nn=46346;
vector<ul>v,v1;
bitset<nn>p;
ul pp[1000009];
void sieve(){
     for(ul i = 3; i*i<=nn; i += 2 )if(p[i]==0)for(ul j=i*i;j<=nn;j+= (i<<1))p[j]=1;
     v.push_back(2);
	 for(ul i=3;i<=nn;i+=2)
		 if(p[i]==0)v.push_back(i);
}
int main(){
    //freopen("ans.text","w",stdout);
    sieve();
    ul n,m;
    while(cin>>n>>m){
        memset(pp,0,sizeof pp);
        ul mx=0,mn=1000009;
        if(n<=2){
            v1.push_back(2);
            n=3;
        }
        if(n<3 && m>3){
            v.push_back(3);
        }
        else if(n%2==0)n++;
        for(ul i=n;i<=m;i+=2){
            if(pp[i-n]==0){
                ul count=0;
                for(ul j=0;j<v.size() and v[j]*v[j]<=i;j++){
                    count=1;
                    if(i%v[j]==0 && i!=v[j]){
                        for(ul k=i;k<=m;k+=i*2)pp[k-n]=1;
                        break;
                    }
                    if(i==v[j]){
                        for(ul k=i*i;k<=m;k+=i*2)pp[k-n]=1;
                        break;
                    }
                }
            }
        }
        for(ul i=n;i<=m;i+=2){
            if(pp[i-n]==0)v1.push_back(i);
        }
        ul x1,x2,y1,y2;
        for(ul i=1;i<v1.size();i++){
            ul sum=(v1[i]-v1[i-1]);
            if(mx<sum){
                x1=v1[i];
                x2=v1[i-1];
                mx=sum;
            }
            if(mn>sum){
                y1=v1[i];
                y2=v1[i-1];
                mn=sum;
            }
        }
        if(mx==0) printf("There are no adjacent primes.\n");
        else printf("%lld,%lld are closest, %lld,%lld are most distant.\n",y2,y1,x2,x1);
        v1.clear();
    }
}
