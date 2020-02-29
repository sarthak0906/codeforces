#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	unsigned long long int n,m,k,l,a;
	cin >> n >> m >> k >> l;
	a = n/m;
	a *= m;
	if 
	if (m > n) cout << -1;
	else if (l > n) cout << -1;
	else if (k == n) cout << -1;
	else cout << (l+k) / a;
	return 0;
}
