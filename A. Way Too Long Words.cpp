#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	while (n--){
		string str;
		cin >> str;
		char * ptr = &str[0];
		int n = strlen(ptr);
		if (n > 10)cout << str[0] << n-2 << str[n-1] << endl;
		else cout << str << endl;
	}
	return 0;
}

