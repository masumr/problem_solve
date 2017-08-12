#include<cmath>
#include<cstdio>
int n, x, y;
int main() {
    while(scanf("%d",&n) && n){
        int root = ceil(sqrt(n));
        int c = root * root - root + 1;
        x = y = root;
        if(root % 2 == 0) {
            if(n > c) y -= n - c;
            else x -= c - n;
        }
        else{
            if(n > c) x -= n - c;
            else y -= c - n;
        }
        printf("%d %d\n", x, y);
    }
}
