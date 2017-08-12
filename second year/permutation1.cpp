#include<bits/stdc++.h>
using namespace std;
void per1(char* a,int count)
{
    char b[100];
    char c[100];
    strcpy(c,a);
    int x=strlen(a);
    do{
        for(int i=0;i<x;i++)
            b[i]=a[i];
        if(strcmp(b,c)!=0)
            cout<<"output case "<<count<<": "<<b<<endl;
        count++;
    }while(prev_permutation(a,a+x));
}
int count2(char *a)
{
    static int count=1;
    int x=strlen(a);
    do{
        count++;
    }while(next_permutation(a,a+x));
    return count;
}
void pre2(char *a,int count)
{
    int x=strlen(a);
    do{
        cout<<"output case "<<count<<": ";
        for(int i=0;i<x;i++)
            cout<<a[i];
        cout<<endl;
        count++;
    }while(next_permutation(a,a+x));
}
int main()
{
    char a[100],b[100];
    cin>>a;
    int count1=0;
    strcpy(b,a);
    per1(a,count1);
    pre2(b,count2(a)+1);
}
