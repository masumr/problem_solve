#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void print(int r){
    for(int i=1;i<=r;i++){
        cout<<"  |";
        if(i!=r){
            cout<<"  ";
        }
    }
    cout<<endl;
    char ch='\\';
    char bh='/';
    for(int i=1;i<=r;i++){
        cout<<" "<<bh<<' '<<ch;
        if(i!=r)cout<<" ";
    }
    cout<<endl;
    for(int i=1;i<=r;i++){
         cout<<" | |";
        if(i!=r){
            cout<<" ";
        }
    }
    cout<<endl;
    for(int i=1;i<=r;i++){
         cout<<" | |";
        if(i!=r){
            cout<<" ";
        }
    }
    cout<<"\n";
    for(int i=1;i<=r;i++){
        cout<<"  - ";
        if(i!=r){
            cout<<" ";
        }
    }
    cout<<"\n";

}
int main(){
   int n,r;
   cin>>n>>r;
   for(int i=1;i<=r;i++)print(n/r);
   printf("\n");
}
/*  |    |    |    |
 / \  / \  / \  / \
 | |  | |  | |  | |
 | |  | |  | |  | |
  -    -    -    -
  |    |    |    |
 / \  / \  / \  / \
 | |  | |  | |  | |
 | |  | |  | |  | |
  -    -    -    - */
