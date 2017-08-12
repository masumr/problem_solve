#include<bits/stdc++.h>
using namespace std;
const int nn=100007;
bitset<nn>p;
vector<string>s;
void sieve(){
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i*2))p[j]=1;
    s.push_back("2");
    for(int i=3;i<=nn;i+=2){
        if(p[i]==0){
            stringstream ss;
            ss.clear();
            ss<<i;
            string x;
            ss>>x;
            s.push_back(x);
        }
    }
}
int main(){
    sieve();
    string n,ans;
    while(cin>>n && n!="0"){
        for(int i=0;i<s.size();i++){
            int k=0;
            bool cheack=false;
            for(int j=0;j<=n.size();j++){
                if(s[i][k]==n[j]){
                    while(s[i][k]==n[j] && k<s[i].size()){
                        k++;
                        j++;
                    }
                    j--;
                    if(k==s[i].size()){
                        k=0;
                        //cout<<s[i]<<endl;
                        cheack=true;
                        break;
                    }
                }
                else k=0;
            }
            if(cheack==true)ans=s[i];
        }
        cout<<ans<<endl;
    }

}
