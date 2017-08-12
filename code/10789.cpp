#include <bits/stdc++.h>
using namespace std;
int arr[2000];
bitset<3000>p;
int k;
void sieve(){
    for(int i=3;i*i<=3000;i+=2){
        if(p[i]==0)for(int j=i*i;j<=3000;j+=(i*2))p[j]=1;
    }
    arr[0]=2;
    k=1;
    for(int i=3;i<=3000;i+=2){
        if(p[i]==0)arr[k++]=i;
    }
}
int main()
{
    k=1;
    sieve();
    int n,c=0;
    cin>>n;
    getchar();
    while(n--)
    {
        string value,main_string;
        cin>>value;
        map<char,int>m;
        vector<char>v;
        map<char,int>::iterator it;
        for(int j=0; j<value.size(); j++)
        {
            if((value[j]>='A'&&value[j]<='Z')||(value[j]>='a'&&value[j]<='z')||(value[j]>='0'&&value[j]<='9'))
            {
                m[value[j]]++;
            }
        }

        for(it=m.begin(); it!=m.end(); it++){
            for(int k=0; k<310; k++){
                if(it->second==arr[k]){
                    v.push_back(it->first);
                    break;
                }
            }
        }
        cout<<"Case "<<++c<<": ";
        if(v.size()==0) cout<<"empty"<<endl;
        else{
            for(int j=0; j<v.size(); j++){
                cout<<v[j];
            }
            cout<<endl;
        }
    }
}
