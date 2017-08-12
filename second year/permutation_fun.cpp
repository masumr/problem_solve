#include<bits/stdc++.h>
using namespace std;
void permutation(char *a,int l,int r)
{
    if(l==r)
        cout<<a<<endl;
    else
    {
        for(int i=1;i<r;i++)
        {
//            swap((a+1),(a+i));
            permutation(a,l+1,r);
  //          swap((a+1),(a+i));
        }
    }
}
int main()
{
    char a[10];
    cin>>a;
    int x=strlen(a);
    permutation(a,0,x-1);
}
