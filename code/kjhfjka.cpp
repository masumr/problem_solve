long long n,m;
scanf("%lld%lld",&n,&m);
if(n-m>m)
    m=n-m;
long long ans=1;
for(i=1;i<=m;i++,n--)
{
    ans*=i;
    ans/=m;
}
