#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            v1.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.rbegin(),v2.rend());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v1[i]*v2[i];
        }
        printf("%d\n",sum);
        v1.clear();v2.clear();
    }
}
