#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    getchar();
    for(int i=1;i<=t;i++){
        string s;
        while(getline(cin,s)){
            if(s.size()==0) break;
            int x=s.size();
            for(int i=0;i<x;i++){
                if(s[i]=='1') printf("I");
                else if(s[i]=='2') printf("Z");
                else if(s[i]=='3') printf("E");
                else if(s[i]=='4') printf("A");
                else if(s[i]=='5') printf("S");
                else if(s[i]=='6') printf("G");
                else if(s[i]=='7') printf("T");
                else if(s[i]=='8') printf("B");
                else if(s[i]=='9') printf("P");
                else if(s[i]=='0') printf("O");
                else cout<<s[i];
            }
            cout<<endl;
        }
        if(i!=t) cout<<endl;
    }
}
