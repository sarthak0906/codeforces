#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int s,n;
	cin >> s >> n;
	int bonus = 0;
	int strength = 0;
	int min1 = INT_MAX;
//	int max = INT_MIN;
	for (int i=0;i<n;++i){
		int x,y;
		cin >> x >> y;
		strength += x;
		bonus += y;
		min1 = min(min1,y);
	}
	s = s + bonus;
	s -= min1;
	if (s > strength) cout << "NO";
	else cout << "YES"; 
	return 0;
}

