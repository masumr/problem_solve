#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int num,kase;
   string s;
   cin>>kase;
   while(kase--)
   {
     cin>>s;
     int len=s.length();
     for(int i=1;i<=len;i++)
     {
       string concat="";
       string per=s.substr(0,i);
       int perlen=per.length();
       for(int i=1;i<=len/perlen;i++)
       concat=concat+per;
       if(concat==s)
       {cout<<perlen<<"\n";
       break;}
     }
     if(kase)cout<<"\n";
   }
   return 0;
 }
