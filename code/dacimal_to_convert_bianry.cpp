#include<bits/stdc++.h>
using namespace std;
int decimal_to_convert_others(int val,int base)
{
    if(val>0){

        decimal_to_convert_others(val/base,base);
        if((val%base)>9)
            cout<<(char)(55+(val%base));
        else
            cout<<(val%base);
    }
}
int others_to_convert_decimal(char a[],int b)
{
    int x=strlen(a);
    int sum=0;
    int k=x-1;
    for(int i=0;i<x;i++)
    {
        if(a[i]>='A')
            sum=sum+(((int)a[i]-55)*pow(b,k--));
        else
            sum=sum+(((int)a[i]-48)*pow(b,k--));
    }
    return sum;
}
int main()
{
    char a[20];
    int b,c;
    while(cin>>a>>b>>c){
        if(strlen(a)>=7)
            cout<<"boring"<<endl;
        else{
            cout<<decimal_to_convert_others(b,c);
            //cout<<decimal_to_convert_others(others_to_convert_decimal(a,b),c)<<endl;
        }
    }
}
