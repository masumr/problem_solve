#include<bits/stdc++.h>
using namespace std;
int count_power(int n,int d)
{
    int count=0;
    while(n%d==0)
    {
        count++;
        n/=d;
    }
    return count;
}
int combination_digit(int number,int d)
{
    int count=0;
    int k=2;
    int value=d;
    while(number>=value)
    {
        int di=number/value;
        count+=di;
        value=pow(d,k++);
    }
    return count;
}
int minimum_value(int a,int b)
{
    return (a>b?b:a);
}
int main()
{
    int n,r,p,q,s,number,power;
    int count1,count2,count3,count4,count5;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>r>>p>>q;
        s=n-r;
        count1=(combination_digit(n,2)+(count_power(p,2)*q))-(combination_digit(r,2)+combination_digit(s,2));
        count2=(combination_digit(n,5)+(count_power(p,5)*q))-(combination_digit(r,5)+combination_digit(s,5));
        int count3=minimum_value(count1,count2);
        printf("Case %d: ",i);
        cout<<count3<<endl;
    }

}
