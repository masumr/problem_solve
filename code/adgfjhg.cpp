#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,n;
    cin>>n;
    cout<<n<<endl;
    printf("%d nota(s) de R$ 100,00\n",n/100);
    n%=100;
    printf("%d nota(s) de R$ 50,00\n",n/50);
    n%=50;
    printf("%d nota(s) de R$ 20,00\n",n/20);
    n%=20;
    printf("%d nota(s) de R$ 10,00\n",n/10);
    n%=10;
    printf("%d nota(s) de R$ 5,00\n",n/5);
    n%=5;
    printf("%d nota(s) de R$ 2,00\n",n/2);
    printf("%d nota(s) de R$ 1,00\n",n%2);

}
