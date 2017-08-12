#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int arr[1000];
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        int temp=0,m=1,x;
        arr[0]=1;
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<m;j++)
            {
               x=arr[j]*a+temp;
               arr[j]=x%10;
               temp=x/10;
            }
            while(temp!=0)
            {
                arr[m]=temp%10;
                temp/=10;
                m++;
            }
        }
        cout<<arr[m-1]<<endl;
    }
}
