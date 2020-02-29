#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	ll a;
	int k;
	long long int min = LONG_MAX;
	int flag = 0;
	cin >> n;
	for (int i=1;i<=n;++i){
		cin >> a;
		if (a < min){
			min = a;
			flag = 0;
			k = i;
		}
		else if (a == min){
			flag = 2;
		}
	}
	if (flag == 2) cout << "Still Rozdil";
	else cout << k;
	return 0;
}

