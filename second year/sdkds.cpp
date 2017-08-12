#include<bits/stdc++.h>
using namespace std;
const int size=100009;
int mark[size];
int main()
{
    memset(mark,0,sizeof 0);
    int n;
    cin>>n;
    int mx=1;
    while(n--){
        int x;
        scanf("%d",&x);
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                mark[i]++;
                if(i!=x/i)mark[x/i]++;
                //x/=i;
            }
        }
        if(x!=1)mark[x]++;
    }
    for(int i=1;i<=size;i++)mx=max(mx,mark[i]);
        cout<<mx<<endl;
}
