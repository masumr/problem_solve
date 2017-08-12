#include<bits/stdc++.h>
using namespace std;
int mpp(string s){
    int ll=s.size();
    int c[ll];
    bool p[ll][ll];
    for(int i=0;i<ll;i++)p[i][i]=1;
    for(int l=2;l<=ll;l++){
        for(int i=0;i<ll-l+1;i++){
            int j=i+l-1;
            if(l==2)p[i][j]=(s[i]==s[j]);
            else p[i][j]=(s[i]==s[j])&&p[i+1][j-1];
        }
    }
    for(int i=0;i<ll;i++){
        if(p[0][i])c[i]=0;
        else{
            c[i]=INT_MAX;
            for(int j=0;j<i;j++){
                if(p[j+1][i] && 1+c[j]<c[i])c[i]=1+c[j];
            }
        }
    }
    return c[ll-1]+1;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        printf("Case %d: %d\n",++c,mpp(s));
    }
}
