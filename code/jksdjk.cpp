#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    int a[55],b[55];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    if(n==1){
        cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
    else if(n==2){
        if(a[0]==b[0]|| a[1]==b[1]){
            int s1=abs(a[0]-a[1]);
            int s2=abs(b[0]-b[1]);
            if(s1==s2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    else{
        vector<int>v1,v2;
        for(int i=1;i<n;i++){
            int s1=a[i]-a[i-1];
            int s2=b[i]-b[i-1];
            //cout<<s1<<' '<<s2<<endl;
            v1.push_back(s1);
            v2.push_back(s2);
        }
        v1.push_back(a[n-1]-a[0]);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int count=0,l1=0,l2=0;
        while(l1<v1.size() && l2<v2.size()){
            //cout<<v1[l1]<<' '<<v2[l2]<<endl;
            if(v1[l1]==v2[l2]){
                l1++;
                l2++;
                count++;
            }
            else if(v1[l1]>v2[l2]){
                l1++;
            }
            else l2++;
        }
        cout<<count<<endl;
        if(count==v2.size())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
