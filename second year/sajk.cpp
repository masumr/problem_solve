#include<bits/stdc++.h>
using namespace std;
char s[10000009];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        int len=strlen(s);
        int sum=s[len-1]-'0';
        if(sum&1)printf("NO\n");
        else{
            char ss[4];
            ss[0]=s[len-3];
            ss[1]=s[len-2];
            ss[2]=s[len-1];
            ss[3]=s[len-0];
                stringstream s1;
                s1<<ss;
                s1>>sum;
                //cout<<sum<<endl;
                if(sum%8==0){
                    printf("YES\n");
                    if(s[0]=='A')cout<<1<<endl;
                    else cout<<0<<endl;
                }
                else{
                    printf("NO\n");
                }
        }
    }
}
