#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    bool ck=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='V' && s[i+1]=='K'){
            cnt++;
            i++;
        }
        else if(!ck && s[i]==s[i+1]){
            if(s[i]=='K'){
                cnt++;
                ck=1;
            }
            else{
                if(i+2<s.size()){
                    if(s[i+2]!='K'){
                        cnt++;
                        ck=1;
                    }
                }
                else{
                    cnt++;
                    ck=1;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
