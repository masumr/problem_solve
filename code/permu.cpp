#include<bits/stdc++.h>
using namespace std;
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
/*void permute(char *a,int l,int r)
{
    int i;
   if (l == r)
     printf("%s\n", a);
    else
    {
        for(i=1;i<=r;i++)
        {
            swap((a+l),(a+i));
            permute(a,l+1,r);
            swap((a+l),(a+i));
        }
    }
}*/
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     cout<<a<<endl;
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}
int i=0;
void permut(char *a,int l ,int r)
{
    if(l==r){
        printf("Case %d: ",++i);
        cout<<a<<endl;
    }
    else{
        for(int i=l;i<=r;i++)
        {
            swap((a+l),(a+i));
            permut(a,l+1,r);
            swap((a+1),(a+i));
        }
    }
}
int main()
{
    char a[10];
    cin>>a;
    int x=strlen(a);
    permut(a,0,x-1);
}
