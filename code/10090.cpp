#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll x,y,d;
void extEuclid(ll a, ll b) {
	if (b == 0) { x = 1; y = 0; d = a; return; }
	extEuclid(b, a % b);
	x = x - (a / b) * y;
	swap(x, y);
}

int main() {
	int n, c1, c2, n1, n2;
	while (scanf("%d", &n) && n) {
		scanf("%d %d", &c1, &n1);
		scanf("%d %d", &c2, &n2);
		extEuclid(n1, n2);
		bool fail = false;
		if (n % d) fail = true;
		else {
			x *= (n / d); y *= (n / d);
			ll a = n2 / d, b = n1 / d;
			ll lf = (ll)ceil(-x / (double)a), rg = (ll)floor(y / (double)b);
			if (lf > rg) fail = true;
			else {
				if (c1 * (x + a * lf) + c2 * (y - b * lf) < c1 * (x + a * rg) + c2 * (y - b * rg))
					x += a * lf, y -= b * lf;
				else
					x += a * rg, y -= b * rg;
            }
		}
		if (fail) puts("failed");
		else printf("%lld %lld\n", x, y);
	}
	return 0;
}
