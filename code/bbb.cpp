#include<bits/stdc++.h>
using namespace std;

long long t,n;
string x;

int main(){

    cin>>t;
    int north=0,south=20000,cur=0;
    while(t--){
        cin>>n>>x;
        if((cur==north or cur==south)&&((x=="East") or (x=="West"))){
            cout<<"NO"<<endl;
            return 0;
        }
        if(x=="East"||x=="West")
            continue;
            else{
                if(x=="South"){
                    cur+=n;
                    if(cur>20000){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                else if(x=="North"){
                    cur-=n;
                    if(cur<0){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
    }
    if(cur==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

Mehedi Hasan
https://ideone.com/3AZQod
Ideone.com
Ideone is something more than a pastebin; it's an online compiler and debugging tool which allows to compile and run code online in more than 40 programming languages.
ideone.com

Mehedi Hasan
https://uva.onlinejudge.org/external/101/10130.pdf
SAT 23:01

MD Abdul
https://www.quora.com/What-are-the-algorithms-required-to-solve-all-problems-using-C++-in-any-competitive-coding-contest
What are the algorithms required to solve all problems (using C++) in any competitive coding contest?
Answer (1 of 12): Here is my helper list. It lists most of needed algorithms/concepts.Some elements are not algorithms (e.g. Fake, States/Concerns) and little repetitions. But 1 final advice: Initially, Given great attention to thinking skills rather than the knowledge. This is helpful for bot...
quora.com
01:16

Mehedi Hasan
http://www.spoj.com/problems/EDIST/
SPOJ.com - Problem EDIST
...
spoj.com
https://uva.onlinejudge.org/external/127/12747.pdf
15:06

Mehedi Hasan
https://brilliant.org/math/geometry/?subtopic=geometric-measurement
Practice Geometry | Brilliant
Angles, lines, curves, 2D and 3D shapes, and other geometric figures are everywhere, including this page. We use shapes and symbols much of the time without even thinking about it. Geometry is key to consciously unlocking secrets ranging from the ancient calculations which helped build the pyramids…
brilliant.org
23:44

MD Abdul
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


}
/*#include<bits/stdc++.h>
#include<map>
using namespace std;
map<string,string>mp,m2;
map<string,int>m1;
int main(){
    string s,s1,s2,s3;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="create"){
            cin>>s1;
            if(m1[s1]!=0)cout<<"ERROR"<<endl;
            else {cout<<"OK"<<endl;
                mp[s1]=s1;
                m1[s1]=1;
                m2[s1]=s1;
            }
        }
        else if(s=="change"){
            cin>>s1>>s2;
            if(m1[s2]!=0 || m1[s1]!=1)cout<<"ERROR"<<endl;
            else {
                cout<<"OK"<<endl;
                m2[s2]=s1;
                m1[s1]=2;
                while(m2[s1]!=s1){
                    s1=m2[m2[s2]];
                    mp[s1]=s2;
                }
                mp[s1]=s2;
                mp[s2]=s2;
                m1[s2]=1;
            }
        }
        else if(s=="search"){
            cin>>s1;
            if(m1[s1]==0)cout<<"ERROR"<<endl;
            else {
                while(m2[s1]!=s1){
                    s1=m2[m2[s2]];
                }
                cout<<mp[s1]<<endl;
            }
        }
    }
    //cout<<m1["feroz"]<<endl;
}*/
