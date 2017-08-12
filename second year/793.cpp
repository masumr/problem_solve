#include<bits/stdc++.h>
using namespace std;
const int N=800;
int rn[N];
int pr[N];
int finds(int r){
    return (pr[r]==r)?r:finds(pr[r]);
}
void unions(int u,int v){
    u=finds(u);
    v=finds(v);
    if(u!=v){
        if(rn[u]>rn[v]){
            pr[u]=v;
        }
        else{
            pr[v]=u;
            if(rn[u]==rn[v]){
                rn[v]++;
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
       int n;
       scanf("%d",&n);
       getchar();
       for(int i=1;i<=n;i++){
            pr[i]=i;
            rn[i]=0;
       }
       string s;
       char ch;
       int x,y,c1=0,c2=0;
       while(getline(cin,s)){
            if(s.size()==0)break;
            sscanf(s.c_str(),"%c %d %d",&ch,&x,&y);
            if(ch=='c')unions(x,y);
            else{
                if(finds(x)==finds(y)){
                    c1++;
                }
                else c2++;
            }
       }
       printf("%d,%d\n",c1,c2);
       if(t)printf("\n");
    }
}
