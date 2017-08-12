#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a[1010],b[1010];
    cin>>t;
    for(i=0;i<t;i++)
        cin>>a[i];
    sort(a,a+t);
    int count=0;
    memset(b,0,sizeof(b));
    for(i=0;i<t-1;i++)
    {
        for(int j=i+1;j<t;j++){
            if(b[j]==0){
                if(a[i]<a[j]){
                    count++;
                    b[j]=1;
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
}
