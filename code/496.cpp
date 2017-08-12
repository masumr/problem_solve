#include<bits/stdc++.h>
using namespace std;
set<int>convert(string line){
    stringstream ss(line);
    int num;
    set<int>v;
    v.clear();
    while(ss>>num)v.insert(num);
    return v;
}
int main(){
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        set<int>n1,n2;
        n1=convert(a);
        n2=convert(b);
        int count=0;
        set<int>::iterator it1,it;
        int c1=0,c2=0;
        for(it1=n1.begin();it1!=n1.end();it1++){
            it=n2.find(*it1);
            if(it!=n2.end()){
                c1++;
            }
        }
        for(it1=n2.begin();it1!=n2.end();it1++){
            it=n1.find(*it1);
            if(it!=n1.end()) {c2++;}
        }
        if(c1==0 && c2==0) cout<<"A and B are disjoint"<<endl;
        else if(c1==c2 && c2==n1.size() && n1.size()==n2.size()) cout<<"A equals B"<<endl;
        else if(c1==n1.size() && n1.size()<n2.size()) cout<<"A is a proper subset of B"<<endl;
        else if(c2==n2.size() && n2.size()<n1.size()) cout<<"B is a proper subset of A"<<endl;
        else cout<<"I'm confused!"<<endl;
        n1.clear();
        n2.clear();
    }
}
