#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	int count = 0;
	for (size_t i=0;i<str.length();++i){
		if (count == 0){
			if (str[i] == 'h') count ++;
		}
		else if (count == 1){
			if (str[i] == 'e') count ++;
		}
		else if (count == 2){
			if (str[i] == 'l') count ++;
		}
		else if (count == 3){
			if (str[i] == 'l') count ++;
		}
		else if (count == 4){
			if (str[i] == 'o') count ++;
		}
	}
	if (count == 5) cout << "YES";
	else cout << "NO";
	return 0;
}

