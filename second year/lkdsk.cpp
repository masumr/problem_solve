#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int a[n+10];
    int b[n+10];
    int cnt=0;
    a[0]=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    b[0]=0;
    for(int i=1;i<n;i++)b[i]=b[i-1]+a[i];
    //for(int i=0;i<n;i++)cout<<b[i]<<' ';
    cout<<endl;
    scanf("%d",&n);
    while(n--){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",b[y-1]-b[x-1]);
    }
}
