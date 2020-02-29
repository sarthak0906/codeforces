#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int n0 = 0;
	int n5 = 0;
	while (n--){
		int a;
		cin >> a;
		if (a == 0) n0 += 1;
		if (a == 5) n5 += 1;
	}
	if (n0 && n5/9){
		int a = n5/9;
		while (a--) cout << "555555555";
		while (n0--) cout << 0;
	}
	else if (n0) cout << 0;
	else cout << "-1";
	return 0;
}
