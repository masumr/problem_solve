#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a;
    b=a;
    int x=ceil(a),n;
    int y=x;
    cout<<"NOATS:"<<endl;
    n=x/100;
    printf("%d nota(s) de R$ %d,00\n",n,100);
    x=x%100;
    n=x/50;
    printf("%d nota(s) de R$ %d,00\n",n,50);
    x=x%50;
    n=x/20;
    printf("%d nota(s) de R$ %d,00\n",n,20);
    x=x%20;
    n=x/10;
    printf("%d nota(s) de R$ %d,00\n",n,10);
    x=x%10;
    n=x/5;
    printf("%d nota(s) de R$ %d,00\n",n,5);
    x=x%5;
    n=x/2;
    printf("%d nota(s) de R$ %d,00\n",n,2);
    x=x%2;
    cout<<"MOEDAS:"<<endl;
    y=(((b-y)+x)*100);
    cout<<y<<endl;
    n=(y/100);
    printf("%d nota(s) de R$ %.2f\n",n,1.00);
    y=y%100;
    n=y/50;
    printf("%d nota(s) de R$ %.2f\n",n,.50);
    y=y%50;
    n=y/25;
    printf("%d nota(s) de R$ %.2f\n",n,.20);
    y=y%25;
    n=y/10;
    printf("%d nota(s) de R$ %.2f\n",n,.10);
    y=y%10;
    n=y/5;
    printf("%d nota(s) de R$ %.2f\n",n,.05);
    n=y/1;
    printf("%d nota(s) de R$ %.2f\n",n,.01);
    return 0;
}
