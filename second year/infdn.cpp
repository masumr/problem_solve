#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int sum=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                sum+=i;
                if(n/i!=i)sum+=n/i;
            }
        }
        printf("%d\n",sum);
    }
}
