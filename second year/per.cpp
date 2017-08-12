#include<bits/stdc++.h>
using namespace std;
void permutattion_frist(char* a)
{
    char b[100];
    char c[100];
    strcpy(c,a);
    int x=strlen(a);
    do{
        for(int i=0;i<x;i++;
            b[i]=a[i];
        if(strcmp(b,c)!=0){
            count++;
        }
    }while(prev_permutation(a,a+x));
}
void premutattio_second(char *a)
{
    int x=strlen(a);
    do{
        for(int i=0;i<x;i++)
            cout<<a[i];
        cout<<endl;
    }while(next_permutation(a,a+x));
}
int main()
{
    char a[100],b[100];
    cin>>a;
    strcpy(b,a);
    permutattion_frist(a);
    premutattio_second(b);
}
