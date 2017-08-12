#include<bits/stdc++.h>
using namespace std;
const int N=302;
struct nd{
    int n;
    double d;
};
double mn,p;
int n;
vector<nd>v;
vector<int>k;
double dp[N];
int main(){
    int c=0;
    while(scanf("%lf %d",&p,&n)==2){
        for(int i=0;i<n;i++){
            double p1;int n1;
            scanf("%d %lf",&n1,&p1);
            nd s;
            s.d=p1;
            s.n=n1;
            v.push_back(s);
        }
        nd sk;
        sk.d=p;sk.n=1;
        v.push_back(sk);
        //cout<<"MAs"<<endl;
        getchar();
        string s;
        getline(cin,s);
        stringstream ss(s);
        int num;
        while(ss>>num)k.push_back(num);
        //cout<<v.size()<<endl;
        printf("Case %d:\n",++c);
        for(int i=1;i<=n+90;i++)dp[i]=p*i;
        for(int i=1;i<=n+90;i++){
            for(int j=0;j<v.size();j++){
                int kk=i-v[j].n;
                kk=max(kk,0);
                dp[i]=min(dp[i],dp[kk]+v[j].d);
            }
        }
        for(int i=0;i<k.size();i++){
            printf("Buy %d for $%.2lf\n",k[i],dp[k[i]]);
        }
        v.clear();k.clear();
    }
}
