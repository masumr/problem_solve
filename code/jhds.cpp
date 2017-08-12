#include<bits/stdc++.h>
using namespace std;
void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    string a,b,c;
    int y;
    while(cin>>a>>b){

        int sum=0;
        int num1=a.size();
        int num2=b.size();
        if(num1<num2){
            swap(a,b);
            swap(num1,num2);

        }
        for(int i=num2;i<num1;i++)
            b[i]='0';
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        cout<<a<<' '<<b<<endl;
        for(int i=0;i<num1;i++)
        {
            y=(((int)a[i]-48)+((int)b[i]-48))+sum;
            sum=y/10;
            c[i]=((char)(y%10)+48);
        }
        reverse(c.begin(),c.end());
        int num;
        for(int i=0;i<num1;i++)
        {
            if(c[i]!='0')
            {
                cout<<c[i];
                num=i;
                break;
            }
        }
        for(int i=num+1;i<num1;i++)
            cout<<c[i];
        cout<<endl;
    }
}
