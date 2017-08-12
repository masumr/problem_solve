#include<bits/stdc++.h>
using namespace std;
const int size=10;
int arr[size];
int maximum_value(int left,int right)
{
    static int max=0;
    if(left==right)
        return max;
    maximum_value(left+1,right);
    if(max<arr[left])
        max=arr[left];

}
int main(){
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maximum_value(0,n-1)<<endl;
}
