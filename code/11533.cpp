#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    getchar();
    while(t--)
    {
        char a[1000];
        gets(a);
        int sum=0;
        printf("Case #%d: ",++c);
        int x=strlen(a);
        for(int i=0;a[i]!=NULL;i++){
            if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ') sum++;
            else if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x') sum+=2;
            else if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y') sum+=3;
            else sum+=4;
        }
        cout<<sum<<endl;
    }
}
