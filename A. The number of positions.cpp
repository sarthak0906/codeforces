#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n,a,b;
	cin >> n >> a >> b;
	int m = min(n-a,b+1);
	cout << m;
	return 0;
}

