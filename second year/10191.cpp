#include<bits/stdc++.h>
using namespace std;
struct node{
    int h1,m1,h2,m2;
};
vector<node>v;
bool com(node a,node b){
    int l1=(a.h1*60+a.m1);
    int l2=(b.h1*60+b.m1);
    return l1<l2;
    /*if(l1<l2)return true;
    else if(l1==l2){
        int k1=(a.h2*60+a.m2);
        int k2=(b.h2*60+b.m2);
        if(k1<k2)return true;
        else return false;
    }
    else return false;*/
}
int main(){
    int t,c=0;
    while(scanf("%d",&t)==1){
        getchar();
        int l1=(10*60);
        string s;
        int h,m,h1,m1,h2=10,m2=00;
        int k1=10,k2=00;
        char ch;
        int mx=0;
        for(int i=0;i<t;i++){
            cin>>h>>ch>>m>>h1>>ch>>m1;
            getline(cin,s);
            node nd;
            nd.h1=h;nd.m1=m;nd.h2=h1;nd.m2=m1;
            v.push_back(nd);
        }
        sort(v.begin(),v.end(),com);
        //for(int i=0;i<v.size();i++)cout<<v[i].h1<<' '<<v[i].m1<<' '<<v[i].h2<<' '<<v[i].m2<<endl;
        if(v[0].h1!=10 || v[0].m1!=10){
            mx=(v[0].h1*60+v[0].m1)-(10*60);
            h2=10;
            m2=00;
        }
        for(int i=1;i<v.size();i++){
            if((v[i-1].h2<=v[i].h1 || v[i-1].m2<=v[i].m1)){
                int tt=(v[i].h1*60+v[i].m1)-(v[i-1].h2*60+v[i-1].m2);
                //cout<<mx<<' '<<tt<<endl;
                if(mx<tt){
                    mx=tt;
                    h2=v[i-1].h2;
                    m2=v[i-1].m2;
                    //cout<<h2<<' '<<m2<<endl;
                }
            }
        }
        int len=v.size()-1;
        if(v[len].h2!=18){
            int tt=(18*60)-(v[len].h2*60+v[len].m2);
                if(mx<tt){
                    mx=tt;
                    h2=v[len].h2;
                    m2=v[len].m2;
                }
        }
        if(mx>=60){
            printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d hours and %d minutes.\n",++c,h2,m2,mx/60,mx%60);
        }
        else
            printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d minutes.\n",++c,h2,m2,mx);
        v.clear();
    }
}
