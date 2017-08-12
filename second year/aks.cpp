#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>v[11];
int main(){
    v[2].push_back(2);
    v[3].push_back(3);
    v[4].push_back(3);v[4].push_back(2);v[4].push_back(2);
    v[5].push_back(5);
    v[6].push_back(5);v[6].push_back(3);
    v[7].push_back(7);
    v[8].push_back(2);v[8].push_back(2);v[8].push_back(2);v[8].push_back(7);
    v[9].push_back(7);v[9].push_back(2);v[9].push_back(3);v[9].push_back(3);
    ll n;
    int d;
    cin>>d;
    cin>>n;
    bool ck=0;
        vector<int>v1;
        while(n){
            int s1=n%10;n/=10;
            for(int i=0;i<v[s1].size();i++)v1.push_back(v[s1][i]);
        }
        if(v1.size()==0){
            cout<<n<<endl;
            return 0;
        }
        sort(v1.rbegin(),v1.rend());
        for(int i=0;i<v1.size();i++)cout<<v1[i];
        cout<<endl;

}
