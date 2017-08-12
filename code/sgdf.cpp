#include<bits/stdc++.h>
using namespace std;
map<string,int>w;
map<string,int>m;

int main()
{
    w["FRI"]=6;w["SAT"]=7;w["SUN"]=1;w["MON"]=2;w["TUE"]=3;w["WED"]=4;w["THU"]=5;
    m["JAN"]=31;m["FEB"]=28;m["MAR"]=31;m["APR"]=30;m["MAY"]=31;m["JUN"]=30;m["JUL"]=31;m["AUG"]=31;m["SEP"]=30;m["OCT"]=31;m["NOV"]=30;m["DEC"]=31;
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int sum;
       if(m[a]==28) sum=8;
       else if(w[b]<=3) sum=8;
       else if(w[b]==4){
            if(m[a]==30) sum=9;
            else sum=10;
       }
       else if(w[b]==5){
            if(m[a]==30) sum=9;
            else sum=10;
       }
       else if(w[b]==6)sum=10;
       else if(w[b]==7){
            if(m[a]==30) sum=10;
            else sum=9;
       }
       cout<<sum<<endl;
    }
}
