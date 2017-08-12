#include<bits/stdc++.h>
using namespace std;
const int mx=1000;
int grid[mx+5][mx+5],row_sum[mx];
int main()
{

    int x;
    while(cin>>x){
     int mx_sum=-100000000;
    int row=x,column=x;
    for(int i=1;i<=x;i++)for(int j=1;j<=x;j++)cin>>grid[i][j];
    for(int left_column=1;left_column<=column;left_column++)
    {
        for(int i=1;i<=row;i++)
        {
            row_sum[i]=0;
        }
        for(int right_column=left_column;right_column<=column;right_column++)
        {
            for(int i=1;i<=row;i++)
            {
                row_sum[i]=row_sum[i]+grid[i][right_column];
            }
            for(int i=1;i<=row;i++)
            {
                int sum=0;
                for(int j=i;j<=row;j++)
                {
                    sum=sum+row_sum[j];
                    if(sum>mx_sum)
                    mx_sum=sum;
                }

            }
        }
    }
    cout<<mx_sum<<endl;
    }
    return 0;
}
