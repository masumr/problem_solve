#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    int c;
    map<char,int>mp;
    for(char cc='a';cc<='h';cc++)mp[cc]=(int)(cc-'a');
    cin>>c>>a;
    int dx[]={1,1,-1,-1,0,0,1,-1};
    int dy[]={1,-1,1,-1,1,-1,0,0};
    int count=0;
    for(int i=0;i<8;i++){
        int tx=mp[a]+dx[i];
        int ty=c+dy[i];
        if(tx>0 && tx<=8 && ty>0 && ty<=8){
            count++;
        }
    }
    cout<<count<<endl;
}
