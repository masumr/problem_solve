#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool leap_year(int n){
    return (n%4==0 and(n%100)!=0 or n%400==0)?true:false;
}
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int m_day[]={0,31,59,90,120,151,181,212,242,273,304,334};
int m1_day[]={31,59,90,120,151,181,212,242,273,304,334,365};
int main(){
    ll d1,d,m,y;
    while(cin>>d1>>d>>m>>y and (d1!=0 and d!=0 and m!=0 and y!=0)){
        m--;
        ll sum=(y*365)+((y/4)-(y/100)+(y/400));
        sum+=(m1_day[m]+d);
        if(m>=2 and leap_year(y+1)==true) sum++;
        sum--;
        cout<<sum<<endl;
        ll y1=sum/365;
        ll s=(y1/4)-(y1/100)+(y1/400);
        sum%=365;
        if(sum<s){
            y1--;
            sum+=365;
        }
        sum-=s;
        int i=0;
        while(m1_day[i]<=sum){
            i++;
        }
        ll m1=i;
        ll d1=(sum-m1_day[--i]);
        d1++;
        cout<<d1<<' '<<m1<<' '<<y1<<endl;
    }
}
