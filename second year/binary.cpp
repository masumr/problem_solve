#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	while(n){
        int n1=n,m=0,p=1;
        while(n1){
            if(n1%10)m+=p;
            n1/=10;p*=10;
        }
        v.push_back(m);
        n-=m;
	}
	cout<<v.size()<<endl;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
}
