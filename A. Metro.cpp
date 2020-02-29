#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ll n,s;
	cin >> n >> s;
	int flag = 0;
	for (int i=0;i<n;++i) {
		int a;
		cin >> a;
		if (i == 0 && a == 1) flag ++;
		if (i == s-1){
			if(a == 0) flag ++;
		}
		cout << flag << endl;
	}
	for (int i=n-1;i>=0;i--){
		int a;
		cin >> a;
		if (i == s-1){
			if(a == 0) flag ++;
		}
		cout << flag << endl;
	}
	if (flag>1) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}

