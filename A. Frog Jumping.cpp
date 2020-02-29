#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
	ll a,b,k,x,y,r;
	cin >> a >> b >> k;
	r=0;
	x = k/2;
	y = k-x;
	b = a-b;
	r += (x*b);
	if (k%2) r += a;
	cout << r << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

