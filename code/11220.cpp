#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    getchar();
    getchar();
    vector<string>s;
    while(t--){
        string s1;
        int k=0;
        printf("Case #%d:\n",++c);
        while(getline(cin,s1))
        {
            if(s1.size()==0)break;
            string s2="";
            int kk=0;
            //cout<<kk<<endl;
            vector<string>ss;
            stringstream dd(s1);
            string sa;
            while(dd>>sa)ss.push_back(sa);
            for(int i=0;i<ss.size();i++){
                string gg=ss[i];
                if(gg.size()>=kk+1){
                    //cout<<gg<<' '<<gg.size()<<' '<<kk<<endl;;
                    s2+=gg[kk];
                    kk++;
                }
            }
            s.push_back(s2);
            ss.clear();
            dd.clear();
        }
        for(int i=0;i<s.size();i++)cout<<s[i]<<endl;
        if(t)cout<<endl;
        s.clear();
    }
}
