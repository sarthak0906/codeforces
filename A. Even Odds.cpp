#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	long long int n , k;
	cin >> n >> k;
	long long int mid;
	if (n%2) mid = n/2 + 1;
	else mid = n/2;
	
	if (k > mid) cout << 2*(k-mid);
	else cout << 2*k - 1;
	return 0;
}
