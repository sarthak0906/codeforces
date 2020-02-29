#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	string::iterator itr = str.begin();
	while (itr != str.end()){
		if (*itr == '.') cout << 0;
		else if (*itr == '-'){
			itr++;
			if (*itr == '.') cout << 1;
			else if (*itr == '-') cout << 2;
		}
		itr++;
	}
	return 0;
}

