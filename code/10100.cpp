#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[51];
    string s1;
    int n,m,k;
    int t;
    scanf("%d",&t);
    while(t--){
        printf("\n");
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            for(int j=0;j<m;j++){
                if(s[i][j]>='A' && s[i][j]<='Z')s[i][j]+=32;
            }
        }
       // for(int i=0;i<n;i++)cout<<s[i]<<endl;
        //cout<<endl;
        scanf("%d",&k);
        for(int i=0;i<k;i++){
            cin>>s1;
            int cc=0;
            if(s1[0]>='A' &&s1[0]<='Z')s1[0]+=32;
            for(int l=0;l<n;l++){
                bool ck=0;
                for(int j=0;j<m;j++){
                    if(s[l][j]==s1[0]){printf("%d %d\n",l+1,j+1);ck=1;break;}
                }
                if(ck)break;
            }
        }
        //if(t)printf("\n");
    }
}
