#include<bits/stdc++.h>
using namespace std;
int a[10007];
int main(){
    int n;
    while(scanf("%d",&n)&&n!=0){
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        int sum=0,mx=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            mx=max(mx,sum);
            if(sum<0)sum=0;
        }
        if(mx!=0)printf("The maximum winning streak is %d.\n",mx);
        else printf("Losing streak.\n");
    }
}
