#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                x++;
                if(x==3){
                    x=0;
                    cnt++;
                }
            }
            else{
                if(x){
                    x++;
                }
                if(x==3){
                    cnt++;
                    x=0;
                }
            }
        }
        if(x)cnt++;
        printf("Case %d: %d\n",++c,cnt);
    }
}
