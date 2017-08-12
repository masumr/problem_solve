#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,x;
    cin>>n;
    if(n==1){ cin>>x; cout<<x+1<<endl;}
    else
    {
        ll a;
        vector<ll>s,s1;
        ll s2=0,s3=0;
        for(int i=0;i<n;i++)
            s1.push_back(0);
        int k=n-1;
        for(int i=0; i<n; i++)
        {
            ll sum=0;
            for(int j=0; j<n; j++)
            {
                cin>>a;
                if(j==i) s2+=a;
                if(j==k)s3+=a;
                s1[j]+=a;
                sum+=a;
            }
            k--;
            s.push_back(sum);
        }
        sort(s1.begin(),s1.end());
        sort(s.begin(),s.end());
        int q=abs(s[1]-s[0]);
        s[0]+=q;
        s1[0]+=q;
        int count=0;
        int c3=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            cout<<s[i]<<' '<<s1[i]<<endl;
            if(s[0]==s[i]) c1++;
            if(s1[i]==s[i]) c2++;
            if(s1[0]==s1[i]) c3++;
        }
        cout<<c1<<' '<<c2<<' '<<c3<<endl;
        if(c1!=n || c3!=n) cout<<-1<<endl;
        else{
            int co=0;
            if(s2==s3) co++;
            else if(abs(s2-s3)==q && min(s2,s3)+q==s[0]) co++;
            if(co && q!=0) cout<<q<<endl;
            else cout<<-1<<endl;
        }
    }
}
