#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool isdistint(int n){
	int a , b , c , d;
	a = n %10;
	n /=10;
	b = n %10;
	n /=10;
	c = n %10;
	n /=10;
	d = n %10;
	if (a != b && a != c && a != d && b!=c && b!=d && c!=d) return true;
	return false;
}

int main(){
	int n;
	cin >> n;
	n+= 1;
	while (!isdistint(n)){
		n++;
	}
	cout << n << endl;
	return 0;
}

