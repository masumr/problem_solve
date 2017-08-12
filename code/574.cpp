#include<bits/stdc++.h>
using namespace std;
int sum;
set<vector<int> >s;
vector<int>v;
const int N=1001;
int a[N];
int n,t;
bool ck;
void brek(int i,int sum){
    //cout<<sum<<' ';
    if(sum==n){
        s.insert(v);
        return;
    }
    for(int k=i;k<t;k++){
        v.push_back(a[k]);
        brek(k+1,sum+a[k]);
        v.pop_back();
    }
}
int main(){
    while(scanf("%d%d",&n,&t) &&(n && t)){
        for(int i=0;i<t;i++)scanf("%d",&a[i]);
        //for(int i=0;i<t;i++)cout<<a[i]<<' ';
        //cout<<endl;
        printf("Sums of %d:\n",n);
        ck=0;
        brek(0,0);
        //cout<<s.size()<<endl;
        if(s.size()==0)printf("NONE\n");
        else{
            vector<vector<int> >ck;
            int k=0;
            for(set<vector<int> >::iterator it=s.begin();it!=s.end();it++){
                ck.push_back(*it);
            }
            for(int i=ck.size()-1;i>=0;i--){
                printf("%d",ck[i][0]);
                for(int j=1;j<ck[i].size();j++)printf("+%d",ck[i][j]);
                printf("\n");
                ck[i].clear();
            }
            s.clear();
            v.clear();
        }
        //v.clear();
    }
}
