#include<bits/stdc++.h>
using namespace std;
void permutation(char *a)
{
    int count=1;
    int x=strlen(a);
    do{
        printf("output case is %d: ",count);
        for(int i=0;i<x;i++){
            cout<<a[i];
        }
        count++;
        cout<<endl;
    }while(prev_permutation(a,a+x));
}
void count_n(char *a)
{

    int x=strlen(a);
    int count_v=0;
    do{
        count_v++;
    }while(prev_permutation(a,a+x));
}
void premutation1(char *a)
{
    int count_c=3;
    char b[25],c[25];
    strcpy(c,a);
    int x=strlen(a);
    do{
        printf("output case is %d: ",count_c);
        for(int i=0;i<x;i++)
            b[i]=a[i];
        if(strcmp(c,b)!=0)
        {
            cout<<b<<endl;
        }

        count_c++;
    }while(next_permutation(a,a+x));
}
int main(){
    char a[20],b[20];
    cin>>a;
    strcpy(b,a);
    permutation(a);
    premutation1(b);

}
