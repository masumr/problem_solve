#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n=0;
    for(int i=1;i<=2*117;i++){
        getline(cin,s);
        int count=0;
        string sk="Accepted";
        int k=0;
        for(int i=0;i<s.size();i++){
            if(sk[k]==s[i])count++;
            else {
                k=0;count=0;
            }
        }
       if(count==sk.size())n++;
       cout<<i<<' ' ;
    }
    cout<<n<<endl;
}
