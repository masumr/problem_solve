#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+7;
char s[N],t[N],u[N],mn[N];
int main(){
    scanf("%s",s);
    int len = strlen(s);
    mn[len]='z'+1;
    int len2 = 0;
    for(int i=len-1;i>=0;i--)
        mn[i]=min(mn[i+1],s[i]);
    int len3 = 0;
    for(int i=0;i<len;i++){
        t[len2++]=s[i];
        while(len2 && t[len2-1]<=mn[i+1])
            u[len3++]=t[--len2];
    }
    printf("%s\n",u);
}
