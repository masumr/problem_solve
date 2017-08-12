#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int size=5;
    int arr[size]={1,2,3,4,5};
    int *p=&arr[0];
    int i=0;
    while(i<size){
        cout<<(p+i)<<' '<<*(p+i)<<endl;
        i++;
        static int i=1;
    }
}
