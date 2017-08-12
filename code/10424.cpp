#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[26],b[26];
    float x,y,d;
    while(gets(a))
    {
        gets(b);
        int s1=0,s2=0;
        int n1=strlen(a);
        int n2=strlen(b);
        for(int i=0;i<n1;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
                s1+=((int)a[i]-64);
            else if(a[i]>='a' && a[i]<='z')
                s1+=(a[i]-96);

        }
        for(int i=0;i<n2;i++)
        {
            if(b[i]>='A' && b[i]<='Z')
                s2+=((int)b[i]-64);
            else if(b[i]>='a' && b[i]<='z')
                s2+=(b[i]-96);
        }
        int s=0;
        while(s1!=0)
        {
            s+=(s1%10);
            s1/=10;
        }
        if(s>9)
        {
            s1=s;
            s=0;
            while(s1!=0)
            {
                s+=s1%10;
                s1/10;
            }
        }
        int k=0;
        while(s2!=0){
            k+=(s2%10);
            s2/=10;
        }
        s2=k;
        if(s2>9)
        {
            k=0;
            while(s2!=0)
            {
                k+=s2%10;
                s2/=10;
            }
        }
        s2=k;
        if(s1>s2)
            swap(s1,s2);
        y=(float)s1;
        d=(float)s2;
        x=y/d;
        x*=100;
        char c='%';
        printf("%.2f %\n",x);
    }
}
