
#include<bits/stdc++.h>

using namespace std;
  map<string,bool>check,pp;
  map<string,string>ch;

  string fi(string a)
  {
    if(pp[a]==0)
     return a;
     return ch[a]=fi(ch[a]);



  }


int main()
{
  int n;
  scanf("%d",&n);

while(n--)
{
  string op,name;
  cin>>op;
  if(op=="create")
  {
    cin>>name;
     if(check[name]==1)
     printf("ERROR\n");
     else {printf("OK\n");check[name]=1;}

  }
  else if(op=="search")
  {
     cin>>name;
     if(check[name]==1)
     {
     if(pp[name]==1&&pp[ch[name]]==0)
     cout<<ch[name]<<endl;
     else
       cout<<fi(name)<<endl;





     //      cout<<s<<endl;



    //  else cout<<name<<endl;

      }


       else printf("ERROR\n");


  }
  else {

    string ne;
    cin>>name>>ne;
    if(check[name]==1&&check[ne]!=1&&pp[name]!=1)
    {

     ch[name]=ne;
     check[ne]=1;
     pp[name]=1;
  printf("OK\n");
//cout<<ne<<endl;

    }
    else
    printf("ERROR\n");






}
}
return 0;


}///kjsdhvcfkhk
