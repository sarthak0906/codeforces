#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	ll sum = 0;
	int c = 0;
	while (n--){
		int a , b;
		cin >> a >> b;
		c += b;
		c -= a;
		if (c > sum) sum = c;
	}
	cout << sum << endl;
	return 0;
}

