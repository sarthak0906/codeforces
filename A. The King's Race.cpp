#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll x,y;
	cin >> x >> y;
	ll dw = x-1;
	dw += y-1;
	ll db = n-x;
	db += n-y;
	if (db < dw) cout << "Black\n";
	else cout << "White\n";
	return 0;
}

