#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int lo=0,hi=v.size()-1;
        int sum=0;
        while(lo<=hi){
            sum+=abs(v[lo]-v[hi]);
            lo++;
            hi--;
        }
        printf("%d\n",sum);
        v.clear();
    }
}
