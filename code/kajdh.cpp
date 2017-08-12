#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float sum=1;
        for(int i=2;i<n;i++)sum+=(1/(float)i);
        printf("Case %d: %.6f\n",++c,sum);
    }
}
