#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    vector<stack<char> >v;
    stack<char>s;
    int c=0;
    while(getline(cin,s1)){
        if(s1=="end")break;
        s.push(s1[0]);
        v.push_back(s);
        s.pop();
        for(int i=0;i<s1.size();i++){
            bool ck=0;
            for(int j=0;j<v.size();j++){
                if(s1[i]<=v[j].top()){
                    v[j].push(s1[i]);
                    ck=1;
                    break;
                }
            }
            if(!ck){
                s.push(s1[i]);
                v.push_back(s);
                s.pop();
            }
        }
        printf("Case %d: %d\n",++c,v.size());
        v.clear();
    }
}
