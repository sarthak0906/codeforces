#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int x = 0;
	while (n--){
		string str;
		cin >> str;
		if (str[1] == '+') x += 1;
		else x -= 1;
	}
	cout << x;
	return 0;
}

