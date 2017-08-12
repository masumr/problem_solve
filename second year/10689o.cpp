#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n;
        cin>>n;
        while(n--){
            string s2;
            int k=0;
            cin>>s2;
            int len=s2.size();
            bool ck=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==s2[k])k++;
                else{
                    if(k==len){ck=1;break;}
                    k=0;
                }
            }
            if(k==len)ck=1;
            if(ck)cout<<'y'<<endl;
            else cout<<'n'<<endl;
        }
    }
}
