#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mn;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    int count=0;
    for(int i=0;i<n;i++){
        if(!mp[s[i]]){
            count++;
            mp[s[i]]++;
        }
    }
    mn=n;
    mp.clear();
    int lo=0,hi=0;
    int c1=0;
    while(hi<n){
        if(c1<count){
            if(!mp[s[hi]]){
                c1++;
            }
            mp[s[hi]]++;
            hi++;
        }
        else{
            //mn=min(mn,hi-lo);
            mp[s[lo]]--;
            if(!mp[s[lo]])c1--;
            lo++;
            //cout<<hi<<' '<<lo<<' '<<mp[s[lo]]<<endl;
            mn=min(mn,hi-lo+1);
        }
    }
    while(1){
        mp[s[lo]]--;
        //cout<<hi<<' '<<lo<<endl;
        if(c1<count)break;
        if(!mp[s[lo]]){
            mn=min(mn,hi-lo);
            break;
        }
        lo++;
    }
    cout<<mn<<endl;
}
