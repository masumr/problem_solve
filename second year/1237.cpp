#include <stdio.h>
int l[10000], h[10000];
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n,m,p;
        char name[10000][25];
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%s %d%d",name[i],&l[i],&h[i]);
        scanf("%d",&m);
        while(m--){
            scanf("%d", &p);
            int cnt = 0, mi;
            for(int i=0;i<n;i++) {
                if(l[i]<=p &&p<= h[i]) cnt++, mi = i;
                if(cnt > 1) break;
            }
            if(cnt == 1)printf("%s\n",name[mi]);
            else printf("UNDETERMINED\n");
        }
        if(t)printf("\n");
    }
    return 0;
}
