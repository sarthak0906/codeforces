#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int mod (int n){
	if (n<0) return -n;
	return n;
}

int main(){
	int a , b;
	for (int i = 1;i<=5;++i){
		for (int j = 1;j<=5;++j){
			int g;
			cin >> g;
			if (g == 1){
				a = i;
				b = j;
				
			}
		}
	}
//	cout << a << b << endl;
//	cout << mod(3-a) << mod(3-b) << endl;
	int sum = mod(3-a) + mod(3-b);
	cout << sum << endl;
	return 0;
}

