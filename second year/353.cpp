#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main(){
    string s;
    while(cin>>s){
        int d=0,y=s.size(),len=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<=i;j++){
                string a="";
                for(int k=d;k<d+y;k++)a+=s[k];
                    string b=a;
                    reverse(b.begin(),b.end());
                    if(a==b){
                        if(!mp[a]){
                            len++;
                            mp[a]++;
                        }
                    }
                    d++;
            }
            d=0;
            y--;
        }
        cout<<"The string '"<<s<<"' contains "<<len<<" palindromes."<<endl;
        mp.clear();
    }
}
