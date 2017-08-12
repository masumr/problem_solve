#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        int count=0;
        count=min(abs(a1-b1),abs(a2-b2));
        if(a1<0 or a2<0 or b1<0 or b2<0) count++;
        printf("Case %d: %d\n",++c,count);
    }
}
