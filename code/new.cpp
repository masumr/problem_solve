#include<bits/stdc++.h>
using namespace std;
int main(void){
    int N,t=0;
    cin>>N;
    while(N--){
        string a,b;
        cin>>a;
        b=a;
        reverse(a.begin(),a.end());
        if(a==b)
            printf("Case %i: Yes\n",++t);
        else
            printf("Case %i: No\n",++t);

    }
    return 0;
}
