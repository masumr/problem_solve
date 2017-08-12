#include<bits/stdc++.h>
using namespace std;
int a[100007],b[100007];
map<int,int>mp;
int main()
{
    int n,x;
    cin>>n>>x;
    memset(b,0,sizeof b);
    for(int i=0; i<n; i++)
    {
        int y;
        cin>>y;
        b[y]++;
    }
    //sort(a,a+n);
    long long count=0;
    for(int i=0;i<100007;i++){
        if(b[i]){
            if(x==0){
                count+=(b[i]*(b[i]-1))/2;
            }
            else{
            int sum=i^x;
            //cout<<sum<<endl;
            if(b[sum]){
                count+=b[i]*b[sum];
                b[i]=0;
                b[sum]=0;
            }
        }
        }
        }
   // for(int i=0;i<n;i++)cout<<mp[a[i]]<<' ';
    cout<<count<<endl;
}
