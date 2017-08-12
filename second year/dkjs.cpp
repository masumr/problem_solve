#include<bits/stdc++.h>
using namespace std;
vector<int>v[40];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        getchar();
        for(int i=0;i<n;i++){
            string s;
            getline(cin,s);
            stringstream ss(s);
            int num;
            while(ss>>num)v[i].push_back(num);
        }
        for(int i=0;i<n;i++)sort(v[i].begin(),v[i].end());
        int a[30];
        int b[30];
        int k=0;
        int k1=0,k2=0,cp=0;
        for(int i=0;i<v[0].size();i++)a[k++]=v[0][i];
        sort(a,a+k);
        for(int i=1;i<n;i++){
            k1=0,k2=0,cp=0;
            while(k1<k && k2<v[i].size()){
                if(a[k1]<v[i][k2]){
                    k1++;
                }
                else if(a[k1]>v[i][k2]){
                    k2++;
                }
                else{
                    b[cp++]=a[k1];
                    k1++;k2++;
                }
            }
            k=0;
            for(int kkk=0;kkk<cp;kkk++)a[k++]=b[kkk];
        }
        if(k==0){
            cout<<"Empty"<<endl;
        }
        else{
            for(int i=0;i<k;i++){
                cout<<a[i];
                if(i!=k-1)cout<<' ';
            }
            cout<<endl;
        }
        for(int i=0;i<=n;i++)v[i].clear();
    }
}
