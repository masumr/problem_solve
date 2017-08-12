#include<bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int sum=0,k=0;
    while(n)
    {
        //sum+=n%2*pow(10,k++);
        sum+=(n&1)*pow(10,k++);
        n>>=1;
    }
    return sum;
}
int main()
{
    cout<<binary(13)<<endl;
    int x=8>>2;
    cout>>x;

}
