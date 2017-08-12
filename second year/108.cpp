#include<bits/stdc++.h>
using namespace std;
const int N=102;
const int inf=INT_MIN;
int a[N][N];
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int mx=inf;
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i]);
        int r_s[N];
        for(int i=0;i<n;i++){
            memset(r_s,0,sizeof r_s);
            for(int r=i;r<n;r++){
               for(int k=0;k<n;k++){
                    r_s[k]+=a[k][r];
                    cout<<r_s[k]<<' ';
               }
               cout<<endl;
                int sum=0;
                /*for(int k=0;k<=r;k++){
                    for(int j=k;j<=r;j++){
                        sum+=r_s[k];
                        mx=max(mx,sum);
                    }
                }*/
            }
            cout<<endl;
        }
        //cout<<endl;
        printf("%d\n",mx);
    }
}
