#include<iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int one=0,zero=0,k=0,l=0,m=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                while(s[i]=='1')
                {
                    //cout<<i<<endl;
                    l++;
                    i++;

                }
            }
            if(s[i]=='0'){
                while(s[i]=='0')


            {
                k++;
                i++;

            }
            i--;
           }
            if(one<l)
                one=l;
            if(zero<k)
                zero=k;
            l=0;
            k=0;
        }
        int d=max(one,zero);
        //cout<<"one :"<<one<<"times,zero :"<<zero<<"times"<<endl;
        cout<<d<<endl;
    }
}
