#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
    int i,j,n;
    int a[1430];
    bool f;
    while (scanf("%d",&n) && n!=0) {
        for (i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        f = true;
        if (1422-a[n-1]>100) f = false;
        else
            for (i=1;i<n;i++)
                if (a[i]-a[i-1]>200) {
                    f = false; break;
                }
        if (f) printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
}
