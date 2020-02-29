#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	int i=0;
	ll a = 1;
	for (i=0;a<=n;++i){
		a= 1ULL<<i;
	}
	cout << i-1;
	return 0;
}

