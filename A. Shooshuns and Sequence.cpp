#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n,k;
	cin >> n >> k;
	int cont = 1;
	int last = 0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		if (i){
			if (last == a) cont++;
			else cont = 1;
		}
		last = a;
	}
	if (k+cont> n) cout << n-cont;
	else cout << -1;
	return 0;
}

