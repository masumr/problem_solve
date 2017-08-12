#include<bits/stdc++.h>
using namespace std;
map<char,int>m1,m2;
int main(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int mx=0;
    for(int i=0;i<n;i++){
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    int c1=0,c2=0,c3=0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int k=0;
    for(char i=0;i<n;i++){
        if(s1[k]>s2[i]){
            c1++;

        }
        else break;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s1[i]<s2[j] && s2[j]!='m'){
                sum++;
                s2[j]='m';
                break;
            }
        }
    }
    cout<<c1<<endl<<sum<<endl;
}
