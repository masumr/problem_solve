#include<bits/stdc++.h>
using namespace std;
const int inf=INT_MAX;
int main(){
    int t;
    vector<int>v;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
        string s;
        //getchar();
        while(getline(cin,s)){
            if(s.size()==0)break;
            stringstream ss;
            ss<<s;
            int n;
            ss>>n;
            v.push_back(n);
        }
        int L[v.size()+10];
        for(int i=1;i<=v.size();i++)L[i]=1;
        int I[v.size()+10];
        I[0]=-inf;
        for(int i=1;i<=v.size();i++)I[i]=inf;
        int ll=0;
        vector<int>c;
        for(int i=0;i<v.size();i++){
            int lo,hi,mid;
            lo=0,hi=ll;
            while(lo<=hi){
                mid=(lo+hi)/2;
                if(I[mid]<v[i])lo=mid+1;
                else hi=mid-1;
            }
            I[lo]=v[i];
            L[i]=lo;
            if(ll<lo){
                ll=lo;
            }
        }
        printf("Max hits: %d\n",ll);
        int i,j;
        i=0;
        for(j=1;j<v.size();j++){
            if(L[j]>L[i]){
                i=j;
            }
        }
        int lis[v.size()+1];
        int top=L[i]-1;
        lis[top]=v[i];
        top--;
        for(int j=i-1;j>=0;j--){
            if(v[j]<v[i] && L[j]==L[i]-1){
                i=j;
                lis[top]=v[i];
                top--;
            }
        }
        for(int i=0;i<ll;i++)cout<<lis[i]<<endl;
        v.clear();
        if(t)cout<<endl;

    }
}
