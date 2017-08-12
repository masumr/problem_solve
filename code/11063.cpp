#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    int k=1;
    while(cin>>t){
        int a[t+4];
        for(i=0;i<t;i++)
            cin>>a[i];
        int count=2;
        if(a[0]==1){
            for(i=2;i<t;i++)
            {
                if(a[i]>(a[i-1]+a[i+2]))
                    count++;
                else{
                    break;
                }
            }
        }
        if(count==t-1)
            printf("Case #%d: It is a B2-Sequence.\n\n",k);
        else
            printf("Case #%d: It is not a B2-Sequence.\n\n",k);
        k++;
    }

}
