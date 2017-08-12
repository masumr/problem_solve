#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m,d;
    cin>>m>>d;
    int sum=a[m-1]-(7-d+1);
    cout<<sum<<endl;
    int kk=(sum/7)+((sum%7)?1:0);
    cout<<kk+1<<endl;
}
