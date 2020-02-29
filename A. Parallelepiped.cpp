#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int a,b,c;
	double x , y , z;
	cin >> a >> b >> c;
	x = sqrt(double((a*b)/c));
	y = sqrt(double((a*c)/b));
	z = sqrt(double((c*b)/a));
	cout << 4*(x+y+z);
	return 0;
}

