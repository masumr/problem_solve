#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[]={'a','b','b','d','e','f'};
    reverse(a,a+6);
    cout<<"the permutation 6! is:"<<endl;
    do{
        cout<<a[0]<<"\t"<<a[1]<<"\t"<<a[2]<<endl;
    }while(prev_permutation(a,a+6));
}
