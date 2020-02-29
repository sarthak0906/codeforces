#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n , k , l , c , d , p , nl , np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int a = k * l;
	a /= nl;
	int b = c * d;
	int x = p / np;
	int res = min(a,b);
	res = min(res,x);
	cout << res/n;
	return 0;
}

