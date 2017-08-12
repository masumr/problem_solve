#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000],b[10000],c[10000],d[10000];
    int i,t;
    cin>>t;
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(a);
        gets(b);
        int x=strlen(a);
        int y=strlen(b);
        int count=0,count1=0,count2=0;
        if(x==y)
        {
            if(strcmp(a,b)==0)
                printf("Case %d: Yes\n",i);
            else
                printf("Case %d: Wrong Answer\n",i);
        }
        else
        {
            for(int j=0;j<x;j++)
            {
                if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z' || a[i]>='0' &&a[i]<='9'){
                    c[count++]=a[j];
                }
            }
            for(int k=0;k<y;k++)
            {
                if(b[i]>='A'&&b[i]<='Z'||b[i]>='a'&&b[i]<='z' || b[i]>='0' &&b[i]<='9'){
                    d[count1++]=b[k];
                }
            }
            if(strcmp(c,d)==0)
                printf("Case %d: Output Format Error\n",i);
            else{
                printf("Case %d: Wrong Answer\n",i);
            }
        }

    }
    return 0;
}
