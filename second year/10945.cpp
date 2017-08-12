#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        if(s=="DONE")return 0;
        string kk="";
        for(int j=0;j<s.size();j++){
                if((s[j]>='a' && s[j]<='z') ||(s[j]>='A' && s[j]<='Z'))
                    if((s[j]>='A' && s[j]<='Z'))kk+=s[j]+32;
                    else kk+=s[j];
        }
        //cout<<kk<<endl;
        string vk=kk;
        reverse(kk.begin(),kk.end());
        if(vk==kk)printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
}

