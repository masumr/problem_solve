#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={0};
    int b[5];
    int count=0,sum=0;
    for(int i=0;i<5;i++){
        cin>>b[i];
        sum+=b[i];
    }
    int as,max=0;
    for(int i=0;i<5;i++)
    {
        count=0;
        if(a[i]==0)
        {
            for(int j=i;j<5;j++)
            {
                if(b[i]==b[j]){
                    count++;
                    a[j]=1;
                }
            }
        }
        if(count>=2)
        {
            if(count>3){
                as=3*b[i];
                if(as>max)
                    max=as;
            }
            else
            {
                as=count*b[i];
                if(as>max)
                    max=as;
            }
        }
    }
    cout<<sum-max<<endl;
}
