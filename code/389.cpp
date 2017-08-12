#include<bits/stdc++.h>
using namespace std;
int k=0;
int main()
{
    char a[100];
    char x1[100];
    int x2,x3;
    while(cin>>a>>x2>>x3)
    {
        int k=0;
        int x=strlen(a);
        int sum=0;
        if(x2!=10)
        {
            for(int i=x-1;i>=0;i--)
            {
                if(a[i]>='A' && a[i]<='F')
                    sum+=((int)a[i]-55)*pow(x2,k++);
                else
                    sum+=((int)a[i]-48)*pow(x2,k++);
            }
        }
        else
        {
            for(int i=0;i<x;i++)
                sum=(sum+(int)(a[i]-48))*x2;
            sum/=10;
        }
        int n1=0;
        if(sum==0)
            printf("%7d\n",0);
        else{
            while(sum!=0)
            {
                int num=sum%x3;
                if(num>9)
                    x1[n1++]=(char)(num+55);
                else
                    x1[n1++]=(char)(num+48);
                sum/=x3;
            }
            if(n1<=7)
            {
                int sum1=(7-n1);
                for(int u=0;u<sum1;u++)
                    cout<<" ";
                for(int u=6;u>=sum1;u--)
                    cout<<x1[u-sum1];
                cout<<endl;
            }
            else
                cout<<"  ERROR"<<endl;
        }
    }
}
