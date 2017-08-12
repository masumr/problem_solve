#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int bar[2000], found[10000000]={0};
bool ver[1000100000]={false};

int cmp(const void *a, const void *b) {
    return (*(int*)a-*(int*)b);
}

int main() {
    int i, low_lim, rng, j, k, key, counter, *get, l, insert;
    for (i=0 ; i*i*i<=1000000000 ; i++) {
        bar[i]=i*i*i;
    }
    int lim = i;

    for (j=1, k=0 ; j<1001 ; j++) {
        for (i=j+1 ; i<1001 ; i++) {
            if (bar[i]+bar[j]>1000100000) continue;
            if (ver[bar[i]+bar[j]]==true) {
                found[k++]=bar[i]+bar[j];
            } else {
                ver[bar[i]+bar[j]]=true;
            }
        }


    }

    qsort(found,k,sizeof(int),cmp);
    while (scanf("%d",&low_lim)!=EOF) {
        scanf("%d",&rng);

        for (i=0 ; i<k && found[i]<low_lim ; i++);
        for (i, insert=0 ; i<k && found[i]<=low_lim+rng ; i++) {
            insert=1;
            if (found[i]!=found[i-1]) printf("%d\n",found[i]);
        }
        if (!insert)
            printf("None\n");

    }

    return 0;
}

