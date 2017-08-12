#include<bits/stdc++.h>
using namespace std;
map<string,int>m1,m2;
string s1[1234];
string s2[1234];
int main(){
    int n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        cin>>s1[i];
    }
    for(int j=0;j<n2;j++){
        cin>>s2[j];
    }
    int c1=0,c2=0;
    if(n1<n2){
        for(int i=0;i<n1;i++){
            if(m1[s1[i]]==0 && m2[s1[i]]==0){
                m1[s1[i]]++;
                c1++;
            }
            if(m1[s2[i]]==0 && m2[s2[i]]==0){
                m1[s2[i]]++;
                c2++;
            }
        }
        for(int i=n1;i<n2;i++){
            if(m1[s2[i]]==0 && m2[s2[i]]==0){
                m1[s2[i]]++;
                c2++;
            }
        }
    }
    else{
        for(int i=0;i<n2;i++){
            if(m1[s1[i]]==0 && m2[s1[i]]==0){
                m1[s1[i]]++;
                c1++;
            }
            if(m1[s2[i]]==0 && m2[s2[i]]==0){
                m1[s2[i]]++;
                c2++;
            }
        }
        for(int i=n2;i<n1;i++){
            if(m1[s1[i]]==0 && m2[s1[i]]==0){
                m1[s1[i]]++;
                c1++;
            }
        }
    }
    if(c1>c2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
