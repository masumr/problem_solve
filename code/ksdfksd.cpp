#include<bits/stdc++.h>
using namespace std;
//vector<pmasir<int,int> >mp;
int main(){
    int kk;
    char a[5][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)cin>>a[i][j];
    }
    bool c1=0,c2=0;
    int count=0,cc=0,c3=0,c4=0;
    for(int i=0;i<4;i++){
        c1=0;
        for(int j=0;j<=2;j++){
            if(a[i][j]=='o'){c1=1;break;}
            else if(a[i][j]=='x')cc++;
            //cout<<a[i][j];
        }
        if(c1==0 && cc>=2){
            c4++;
            //cout<<c1<<' '<<cc<<endl;
            break;
        }
        //cout<<c1<<' '<<cc<<endl;
        c1=0;
        cc=0;
        for(int j=1;j<4;j++){
            if(a[i][j]=='o'){c1=1;break;}
            else if(a[i][j]=='x'){cc++;c2=1;}
        }
        if(c1==0 && cc>=2){
            c4++;
            //cout<<c1<<' '<<cc<<endl;
            break;
        }
        cc=0;
        c1=0;
        for(int j=0;j<3;j++){
            if(a[j][i]=='o'){c1=1;break;}
            else if(a[j][i]=='x')cc++;
        }
        if(c1==0 && cc>=2){
            c4++;
            //cout<<c1<<' '<<cc<<endl;
            break;

        }
        c1=0;
        cc=0;
        for(int j=1;j<4;j++){
            if(a[j][i]=='o'){c1=1;break;}
            else if(a[j][i]=='x')cc++;
        }
        if(c1==0 && cc>=2){
            c4++;
            //cout<<c1<<' '<<cc<<endl;
            break;
        }
        //cout<<i<<' '<<c1<<' '<<cc<<endl;
    }
    cc=0;
    c1=0;
    for(int i=0;i<3;i++){
        if(a[i][i]=='o'){c1=1;}
        if(a[i][i]=='x')cc++;
    }
    if(c1==0 && cc>=2){
            c4++;
    }
    cc=0;
    c1=0;
    for(int i=1;i<4;i++){
        if(a[i][i]=='o')c1=1;
        if(a[i][i]=='x')cc++;
    }
    if(c1==0 && cc>=2){
            c4++;
    }
    cc=0;
    c1=0;
    kk=3;
    for(int i=0;i<3;i++){
        if(a[i][kk]=='o')c1=1;
        if(a[i][kk]=='x')cc++;
        kk--;
    }
    if(c1==0 && cc>=2){
            c4++;
    }
    cc=0;
    c1=0;
    kk=2;
    for(int i=0;i<3;i++){
        if(a[i][kk]=='o')c1=1;
        if(a[i][kk]=='x')cc++;
        kk--;
    }
    if(c1==0 && cc>=2){
            c4++;
    }
    cc=0;
    c1=0;
    kk=1;
    for(int i=0;i<3;i++){
        if(a[kk][i]=='o')c1=1;
        if(a[kk][i]=='x')cc++;
        kk++;
    }
    if(c1==0 && cc>=2){
            c4++;
    }
    cc=0;
    c1=0;
    kk=1;
    for(int i=0;i<3;i++){
        if(a[i][kk]=='o')c1=1;
        if(a[i][kk]=='x')cc++;
        kk++;
    }
    if(c1==0 && cc>=2){
            c4++;
    }
    //cout<<c4<<endl;
    if(c4)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
