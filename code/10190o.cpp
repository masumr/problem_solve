#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200000];
    int n,m;
    while(cin>>m>>n)
    {
        if(m<n || n<2)
            cout<<"Boring!"<<endl;
        else
        {
            int i=0;
            while(m>1)
            {
                if(m%n==0)
                {
                    a[i++]=m;
                    m=m/n;
                }
                else
                {
                    cout<<"Boring!"<<endl;
                    break;
                }
            }
            if(m==1){
                for(int k=0;k<i;k++){
                    cout<<a[k]<<' ';
                }
                cout<<1<<endl;
            }
        }
    }
}
