#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int count = 0;
	while (n--){
		int a , b, c;
		cin >> a >> b >> c;
		a = a + b + c;
		if (a > 1) count++;
	}
	cout << count;
	return 0;
}

