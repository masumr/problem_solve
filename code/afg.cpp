#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b;
    int x1,x2,x3;
    int n;
    cin>>a>>b;
    cin>>n;
    float sum=100000;
    float s1,s2,s3;
    while(n--)
    {
        cin>>x1>>x2>>x3;
        s1=sqrt(((a-x1)*(a-x1))+(b-x2)*(b-x2));
        sum=min(sum,s1/x3);
    }
    printf("%.10f\n",sum);
}
