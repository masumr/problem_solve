#include<bits/stdc++.h>
using namespace std;
int minex(string s){
    s+=s;
    int len=s.size(),i=0,j=1,k=0;
    while(i+k<len && j+k<len){
        if(s[i+k]==s[j+k])k++;
        else if(s[i+k]>s[j+k]){
            i+=k+1;
            if(i<=j)i=j+1;
            k=0;
        }
        else if(s[i+k]<s[j+k]){
            j+=k+1;;
            if(j<=i)j=i+1;
            k=0;
        }
    }
    return min(i,j);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        int tt=minex(s);
        printf("Case %d: ",++c);
        for(int i=tt;i<s.size();i++)cout<<s[i];
        for(int i=0;i<tt;i++)cout<<s[i];
        cout<<endl;
    }
}
