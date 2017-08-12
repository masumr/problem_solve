#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mp;
    string a;
    cin>>a;
    int cs=0;
    for(int i=0;i<=a.size();i++){
        if(a[i]=='8'){
            cs++;
            cout<<"YES"<<endl;
            cout<<'8'<<endl;
            break;
        }
    }
    if(cs==0){
        int len=a.size()-1;
        while(a[len]%2!=0)len--;
        int count=0;
        int sum=a[len]-48;
        len--;
        for(int i=len;i>=0;i--){
            if((sum+((a[i]-48)*10))%4==0){
                sum+=(((a[i]-48)*10)+((a[i+1]-48)*100));
            }
            else mp[a[i]]++;
            if(sum%8==0){
                count++;
                break;
            }
        }
        if(count){
            string b="";
            for(int i=len+1;i>=0;i--){
                if(mp[a[i]]==0){
                    b+=a[i];
                }
                else mp[a[i]]--;
            }
            cout<<"YES"<<endl;
            reverse(b.begin(),b.end());
            cout<<b<<endl;
            if(cs==0){
                string c="";
                for(int i=0;i<b.size();i++){
                    sum=(b[i]-48);
                    if(sum%8==0){
                        c+=b[i];
                        break;
                    }
                    sum*=10;
                    sum+=(b[i+1]-48);
                    if(sum%8==0){
                        c+=b[i];
                        c+=b[i+1];
                        break;
                    }
                    sum*=10;
                    sum+=(b[i+1]-48);
                    if(sum%8==0){
                        c+=b[i];
                        c+=b[i+1];
                        c+=b[i+2];
                        break;
                    }

                }
                cout<<c<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
}
