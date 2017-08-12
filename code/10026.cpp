#include<bits/stdc++.h>
using namespace std;
struct nd{
    int t,f,i;
};
vector<nd>v;
bool com(nd a,nd b){
    return (a.t*b.f<b.t*a.f);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            nd s;
            scanf("%d%d",&s.t,&s.f);
            s.i=i;
            v.push_back(s);
        }
        stable_sort(v.begin(),v.end(),com);
        for(int i=0;i<v.size();i++){
            printf("%d",v[i].i);
            if(i!=n-1)cout<<' ';
        }

    }
}
