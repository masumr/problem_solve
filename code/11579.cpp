#include<bits/stdc++.h>
using namespace std;
vector<double>v;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        while(n--){
            double x;
            scanf("%lf",&x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        double sum=0;
        for(int i=2;i<v.size();i++){
            if(v[i-1]+v[i-2]>=v[i]){
                double s=(v[i-1]+v[i-2]+v[i])/2;
                sum=max(sum,sqrt(s*(s-v[i-2])*(s-v[i-1])*(s-v[i])));
            }
        }
        printf("%.2lf\n",sum);
        v.clear();
    }
}
