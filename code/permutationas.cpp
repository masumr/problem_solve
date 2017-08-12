#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>a;
    for(int i=0;i<3;i++)
    {
        char n;
        cin>>n;
        a.push_back(n);
    }
    sort(a.begin(),a.end());
    do{
        for(int i=0;i<3;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }while(prev_permutation(a.begin(),a.end() ));
}
