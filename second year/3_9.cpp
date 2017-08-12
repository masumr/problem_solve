#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
typedef double dl;
const int N=1000;
dl x[N];
dl XBAR(int n){
    dl sum=0;
    for(int i=1;i<=n;i++){
        sum+=x[i];
    }
    sum/=((dl)n*1.0);
    return sum;
}
dl variance(int n,dl xbar){
    dl sum=0;
    for(int i=1;i<=n;i++){
        dl dif=(x[i]-xbar);
        dif=dif*dif;
        sum+=dif;
    }
    sum/=((dl)n*1.0);
    return sum;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>x[i];
    cout<<setprecision(2)<<fixed;
    dl var=variance(n,XBAR(n));
    dl SD=sqrt(var);
    cout<<"variance = "<<var<<endl;
    cout<<"Standard Deviation = "<<SD<<endl;
    return 0;
}
