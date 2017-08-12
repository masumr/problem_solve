#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<10)cout<<n<<endl;
        else{
            int d=9;
            while(d>1){
                while(n%d==0){
                    n/=d;
                    v.push_back(d);
                }
                d--;
            }
            sort(v.begin(),v.end());
            if(n==1){
                for(int i=0;i<v.size();i++)cout<<v[i];
                cout<<endl;
            }
            else cout<<-1<<endl;
            v.clear();
        }
    }
}
