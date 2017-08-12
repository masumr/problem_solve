#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2;
set<int>s1;
set<int>::iterator it;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,p,q;
        scanf("%d%d%d",&n,&p,&q);
        //cout<<n<<' '<<p<<' '<<q<<endl;
        for(int i=0;i<=p;i++){
            int x;
            scanf("%d",&x);
            v1.push_back(x);
        }
        for(int i=0;i<=q;i++){
            int x;
            scanf("%d",&x);
            v2.push_back(x);
        }
        //cout<<v1.size()<<' '<<v2.size()<<endl;
        for(int i=0;i<v1.size();i++){
            s1.insert(v1[i]);
            it=s1.upper_bound(v1[i]);
            if(it!=s1.end())s1.erase(it);
        }
        int m1=s1.size();s1.clear();
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            s1.insert(v1[i]);
            it=s1.upper_bound(v1[i]);
            if(it!=s1.end())s1.erase(it);
        }
        int m2=s1.size();s1.clear();
        for(int i=0;i<v2.size();i++){
            s1.insert(v2[i]);
            it=s1.upper_bound(v2[i]);
            if(it!=s1.end())s1.erase(it);
        }
        int m3=s1.size();s1.clear();
        reverse(v2.begin(),v2.end());
        for(int i=0;i<v2.size();i++){
            s1.insert(v2[i]);
            it=s1.upper_bound(v2[i]);
            if(it!=s1.end())s1.erase(it);
        }
        int m4=s1.size();s1.clear();
        //cout<<m1<<' '<<m2<<' '<<m3<<' '<<m4<<endl;
        m1=max(m1,m2);
        m2=max(m3,m4);
        //cout<<m1<<' '<<m2<<endl;
        printf("Case %d: %d\n",++c,min(m1,m2));
        v1.clear();v2.clear();
    }
}
