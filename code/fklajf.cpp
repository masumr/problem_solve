#include<bits/stdc++.h>
using namespace std;
bitset<1000>a;
vector<int>v;
void n(){
    v.push_back(2);
    for(int i=3;i<=1000;i+=2){
        if(a[i]==0){
            v.push_back(i);
            for(int j=i*i;j<=1000;j+=2*i) {
                a[j]=1;
            }
        }
    }
}
int main(){
    n();
    cout<<v[100]<<endl;
    cout<<v.size()<<endl;
}
