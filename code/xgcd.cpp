 #include<bits/stdc++.h>
using namespace std;
int xgcd(int a,int b,int& x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
        int x1,y1,gcd=xgcd(b,a%b,x1,y1);
        x=y1;
        y=x1-((a/b)*y1);
        return gcd;
}
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    if(a<b)
        swap(a,b);
    int gcd=xgcd(a,b,x,y);
    cout<<x<<' '<<y<<' '<<gcd<<endl;
}
