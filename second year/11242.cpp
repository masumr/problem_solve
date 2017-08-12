#include<bits/stdc++.h>
using namespace std;
typedef double dl;
vector<dl>v,ff,rr;
int main(){
    int f,t;
    while(scanf("%d",&f) && f){
       scanf("%d",&t);
        while(f--){
            dl x;
            scanf("%lf",&x);
            ff.push_back(x);
        }
        while(t--){
            dl x;
            scanf("%lf",&x);
            rr.push_back(x);
        }
        for(int i=0;i<ff.size();i++){
            for(int j=0;j<rr.size();j++){
                v.push_back(ff[i]/rr[j]);
                //cout<<ff[i]<<' '<<rr[j]<<' '<<ff[i]/rr[j]<<endl;
            }
        }
        sort(v.begin(),v.end());
        dl mx=-1;
        for(int i=0;i<v.size()-1;i++){
            //cout<<v[i]<<' '<<v[i+1]/v[i]<<endl;
            mx=max(mx,v[i+1]/v[i]);
        }
        printf("%.2lf\n",mx);
        ff.clear();v.clear();rr.clear();
    }
}
