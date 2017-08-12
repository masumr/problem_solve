#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        ll sum=b;
        int count=1;
        while(sum%a!=0){
            sum=(sum*10+b)%a;
            count++;
        }
        printf("Case %d: %d\n",++c,count);
    }
}
