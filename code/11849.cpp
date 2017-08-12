#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n,m,x;
    while(scanf("%d%d",&n,&m) and n!=0 and m!=0){
        for(int i=0;i<n+m;i++){
            scanf("%d",&x);
            s.insert(x);
        }
        int sum=s.size();
        printf("%d\n",(n+m)-sum);
        s.clear();
    }
}
