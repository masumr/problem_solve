#include<bits/stdc++.h>
using namespace std;
struct node{
    int a,b;
};
vector<node>v;
int main(){
    int n;
    int x,y;
    cin>>n;
    bool c1=0,c2=0,c3=1,c4=1,c5=0,c6=0;
    int cc1=0,cc2=0;
    int s1=0,s2=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        sum+=x;
        if(y==1){c1=1;cc1=i;}
        else {c2=1;cc2=i;}
        node nd;
        nd.a=x;
        nd.b=y;
        v.push_back(nd);
    }
    int sss=sum;
   // for(int i=0;i<v.size();i++)cout<<v[i].a<<' ';
    if(!c2)cout<<"Infinity"<<endl;
    else if(!c1){
        cout<<v[n-1].a+1899<<endl;
    }
    else{
        bool ck=0;
        sum=v[0].a;
        for(int i=0;i<v.size()-1;i++){
            if(v[i].b==2){
                if(v[i].a<=0 && v[i+1].b==1){
                    ck=1;
                    break;
                }
            }
            else{
                if(v[i].a>=0 && v[i+1].b==2){
                    ck=1;
                    break;
                }
            }
        }
        if(ck)cout<<"Impossible"<<endl;
        else{
                if(v[0].b==1)sum=1901;
                else sum=1899;
                for(int i=0;i<v.size()-2;i++){
                    if(v[i].b==2 && v[i+1].b==1){
                        sum=1899+v[i].a;
                    }
                    else if(v[i].b==1){
                        sum+=v[i].a;
                    }
                    else{
                        int tt=0;
                        if(v[i].a<0)tt=v[i].a;
                        sum=1899+tt;
                    }
                }
                cout<<sum+v[n-1].a+v[n-2].a<<endl;



        }
    }

}
/*6
8 1
-22 1
9 2
-7 2
85 2
77 1*/
