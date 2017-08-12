#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,ll>mp;
int main(){
    mp[2]=6;mp[3]=28;mp[5]=496;mp[7]=8128;mp[13]=33550336;mp[17]=8589869056;mp[19]=137438691328;mp[31]=2305843008139952128;
    int n;
    while(cin>>n and n!=0){
        if(mp[n]!=0){
            cout<<"Perfect: "<<mp[n]<<'!'<<endl;
        }
        else if(n==11 or n==23 or n==29) cout<<"Given number is prime. But, NO perfect number is available."<<endl;
        else cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
}
