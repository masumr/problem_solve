#include<bits/stdc++.h>
using namespace std;
using namespace std;

string rev(string a){
    int i,j;
    string x;
    x="";
    for(i=0,j=a.length()-1; i<a.length(); i++,j--)
        x+=a[j];
    return x;
}
int main(){
    map<string,int>nt;
    vector<string>ff;
    int x,i,d,f,y,j,k;
    string s,a,b;
    while(cin>>s){
        ff.clear();
        x=s.length();
        d=0;f=x;y=0;
        for(i=0; i<x; i++){
            for(j=0; j<=i; j++){
                a="";
                for(k=d; k<d+f; k++)
                    a+=s[k];
                b=rev(a);
                if(a==b)
                {
                    nt[a]++;
                    if(nt[a]==1)
                    {
                        ff.push_back(a);
                        y++;
                    }
                }
                d++;
            }
            d=0;
            f--;
        }
        cout<<"The string '"<<s<<"' contains "<<y<<" palindromes."<<endl;
        for(i=0; i<ff.size(); i++)
        {
            nt[ff[i]]=0;
        }
    }
    return 0;
}

