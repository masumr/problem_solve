#include<bits/stdc++.h>
using namespace std;
//vector<pmasir<int,int> >mp;
int main(){
    int n,mas[111],s=0;
    cin>>n;
    int ck=0;
    for(int i=0;i<n;i++){
        cin>>mas[i];
        if(mas[i])ck=1;
        s+=mas[i];
    }
    //if(mas[0]!=0)ck=1;
    if(ck){
        printf("YES\n");
        int cnt=0,i;
        for( i=0;i<n;i++){
            if(mas[i]&&mas[i]!=s &&mas[0]+mas[i]!=0)
                break;
        }
        if(i!=n){
            cout<<2<<endl;
            cout<<1<<" "<<i+1<<endl;
            cout<<i+2<<" "<<n<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
    }
    else{
        printf("NO\n");
    }

}
