#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum,i;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>a)
    {
        if(a==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        else
        {
            sum=1;
            for(i=2;i<=sqrt(a);i++)
            {
                if(a%i==0){
                    sum=sum+i+(a/i);
                }
            }
            cout<<sum<<endl;
            if(sum==a)
                printf("%5d  PERFECT\n",a);
            else if(sum<a)
                printf("%5d  DEFICIENT\n",a);
            else
                printf("%5d  ABUNDANT\n",a);

        }
    }
}
