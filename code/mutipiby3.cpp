#include<bits/stdc++.h>
using namespace std;;
int ismutripieof_3(int n)
{
    int odd_count=0;
    int even_count=0;
    if(n<0) n=-n;
    if(n==0) return 1;
    if(n==1) return 0;
    while(n)
    {
        if(n&1)
            odd_count++;
        n=n>>1;
        if(n&1)
            even_count++;
        n=n>>1;
    }
    return ismutripieof_3(abs(odd_count-even_count));

}
int main()
{
    int x;
    cin>>x;
    cout<<ismutripieof_3(x)<<endl;
    if(ismutripieof_3(x))
        cout<<"multripie by 3"<<endl;
    else
        cout<<"no multripie by 3 "<<endl;
}
