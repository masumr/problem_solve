#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx,a,b,c,x,y,z,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        //cout<<a<<' '<<b<<' '<<c<<endl;
        int count=0;
        for(x=-100; x<=100 && count==0; x++)
            for(y=-100; y<=100 && count==0; y++)
                for(z=-100; z<=100 && count==0; z++)
                {
                    if(x!=y && y!=z && z!=x)
                    if(x*x+y*y+z*z==c)
                        if(x*y*z==b)
                            if(x+y+z==a)
                            {
                                //cout<<x*x+y*y+z*z<<' '<<x*y*z<<' '<<x+y+z<<endl;
                                count++;
                                cout<<x<<" "<<y<<" "<<z<<endl;
                            }
                }
        if(count==0)cout<<"No solution."<<endl;
    }
}
