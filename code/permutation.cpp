#include<bits/stdc++.h>
using namespace std;
void permutation_frist(char *a)
{
    int x=strlen(a);
    do{
        for(int i=0;i<x;i++)
            cout<<a[i];
        cout<<endl;
    }while(prev_permutation);
}
void permutation_seconde(char *a)
{
    int x=strlen(a);
    char b[100];
    char c[100];
    strcpy(c,a);
    do{
        for(int i=0;i<x;i++)
            b[i]=a[i];
        if(strcmp(c,b)!=0)
            cout<<b<<endl;
    }while(next_permutation);
}
int main()
{
    char a[100],b[100];
    strcpy(b,a);
    permutation_frist(a);

}
