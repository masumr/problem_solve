#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
const int maxn = 31268;
int f[maxn], i, j, m[maxn], p[maxn], t;
int a[10] = { 1, 10, 100, 1000, 10000, 100000 };
long long n, u;
int main(){
	for (i = 0; i < maxn;i++)
		for (j = 1; j < 6; j++)
			if (i / a[j] == 0) {f[i] = j; break;}
	for (i = 1; i < maxn; i++) m[i] = m[i - 1] + f[i];
	for (i = 1; i < maxn; i++) p[i] = p[i - 1] + m[i];
	scanf("%d", &t);
	while (t--)
	{
		cin >> n;
		for (i = maxn - 1; i >= 1; i--) if (n>p[i]) break;
		for (u = p[i], j = 1; j <= i + 1; j++)
		{
			u += f[j];	if (u>=n) break;
		}
		int k = f[j] - (n - u + f[j]);
		k = (j / a[k]) % 10;
		printf("%d\n", k);
	}
	return 0;
}
