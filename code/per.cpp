#include<bits/stdc++.h>
using namespace std;
void per1(char *a,int c)
{
    int x=strlen(a);
    do{
        printf("output case #%d: ",c);
        for(int i=0;i<x;i++)
            cout<<a[i];
        cout<<endl;
        c++;
    }while(prev_permutation(a,a+x));
}
int count(char *a)
{
    int co=1;
    int x=strlen(a);
    do{
        co++;
    }while(next_permutation(a,a+x));
    return co;
}
void per2(char *a)
{
    int d=1;
    char c[100];
    char b[100];
    strcpy(c,a);
    int x=strlen(a);
    do{
        for(int i=0;i<x;i++)
            b[i]=a[i];
        if(strcmp(c,b)!=0){
            printf("output case #%d: ",d);
            cout<<b<<endl;
            d++;
        }
    }while(next_permutation(a,a+x));
}
int main()
{
    char a[100],b[100],c[100];
    cin>>a;
    strcpy(b,a);
    strcpy(c,a);

    //
    per2(b);
    per1(a,count(c)-1);

}
