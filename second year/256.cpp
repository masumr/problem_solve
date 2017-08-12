#include<iostream>
#include<string.h>
#include<vector>
#include<cstdio>
using namespace std;
#define pb push_back
int main(){
    vector<string>v[10];
    v[2].pb("00");v[2].pb("01");v[2].pb("81");
    v[4].pb("0000");v[4].pb("0001");v[4].pb("2025");v[4].pb("3025");v[4].pb("9801");
    v[6].pb("000000");v[6].pb("000001");v[6].pb("088209");v[6].pb("494209");v[6].pb("998001");
    v[8].pb("00000000");v[8].pb("00000001");v[8].pb("04941729");v[8].pb("07441984");v[8].pb("24502500");v[8].pb("25502500");v[8].pb("52881984");v[8].pb("60481729");v[8].pb("99980001");
    int n;
    while(scanf("%d",&n)==1){
        for(int i=0;i<v[n].size();i++){
            cout<<v[n][i]<<endl;;
        }
    }
}
