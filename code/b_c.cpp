#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    int count2=1;
    for(int i=1;i<n;i++){
        cin>>a;
        if(i<a){

            count2++;
        }
    }
    cout<<count2+1<<endl;
}
