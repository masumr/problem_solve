#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        int m=1,temp=0,x;
        a[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                x=(a[j]*i)+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0){
                a[m]=temp%10;
                temp/=10;
                m++;
            }
        }
        sort(a,a+m);
        map<int,int>mp;
        for(int i=0;i<m;i++)
        {
            //cout<<a[i];
            int c=a[i];
            int count=0;
            while(c==a[i]){
                count++;
                i++;
            }
            i--;
            mp[c]=count;
        }
        //cout<<endl;
        printf("%d! --\n",n);
        for(int i=0;i<=9;i++)
        {
            printf(" (%d) %d",i,mp[i]);
            if(i==4) cout<<endl;
        }
        mp.clear();
        cout<<endl;
    }
}
