#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int x1[1001],x2[1001],y1[1001],y2[1001],z1[1001],z2[1001],n;
        scanf("%d", &n);

            for(int i = 0; i < n; i++)
                    scanf("%d %d %d %d %d %d", &x1[i], &y1[i], &z1[i], &x2[i], &y2[i], &z2[i]);

            int xLow = 0, yLow = 0, zLow = 0;
			int xHigh = 1001, yHigh = 1001, zHigh = 1001;

			for(int i = 0; i < n; i++)
			{
				xLow = max(xLow, x1[i]);
				xHigh=  min(xHigh, x2[i]);
				yLow = max(yLow, y1[i]);
				yHigh = min(yHigh, y2[i]);
				zLow = max(zLow, z1[i]);
				zHigh = min(zHigh, z2[i]);
			}

			int volume = (xHigh-xLow) * (yHigh-yLow) * (zHigh-zLow);

			printf("Case %d: %d\n",++c, volume < 0 ? 0 : volume);

    }
}
