#include<bits/stdc++.h>
using namespace std;
int minex(string s){
    s+=s;
    int len=s.size(),i=0,j=1,k=0;
    while(i+k<len and j+k<len){
        if(s[i+k]==s[j+k])k++;
        else if(s[i+k]>s[j+k]){
            i+=k+1;
            if(i<=j)i=j+1;
            k=0;
        }
        else if(s[i+k]<s[j+k]){
            j+=k+1;
            if(i>=j)j=i+1;
            k=0;
        }
    }
    return min(i,j);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        cout<<minex(s)<<endl;
    }
}
