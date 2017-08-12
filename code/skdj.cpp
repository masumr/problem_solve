#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main(){
    string s;
    int t,c=0,k=1;
    while(scanf("%d",&t)!=EOF){
        c=0;
        for(int i=1; i<=t; i++){
            cin>>s;
            printf("Instruction %d: ",++c);
            int l1=s[0]-'0';
            int l2=s[2]-'0';
            if(mp[s])printf("repeat step %d\n",mp[s]);
            else{
                mp[s]=k;
                //mp[nn]=i;
                if(s[1]=='+'){
                    printf("add %d to %d\n",l1,l2);
                    //ss=l1+l2;
                    reverse(s.begin(),s.end());
                    mp[s]=k;
                }
                else if(s[1]=='-'){
                    printf( "subtract %d from %d\n",l2,l1);
                }
                else if(s[1]=='/'){
                    printf("divide %d by %d\n",l1,l2);
                    //ss=l1/l2;
                }
                else if(s[1]=='*'){
                    reverse(s.begin(),s.end());
                    mp[s]=k;
                    printf( "multiply %d with %d\n",l1,l2);
                }
                k++;
            }
        }
        mp.clear();
    }
}

///
