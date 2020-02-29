#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	int flag = 0;
	for (size_t i=0;i<str.length()-7;++i){
		if (str[i] == str[i+1] && str[i] == str[i+2] && str[i] == str[i+3] && str[i] == str[i+4] && str[i] == str[i+5] && str[i] == str[i+6]){
			flag += 1;
			cout << "YES";
		}
	}
	if (flag == 0) cout << "NO";
	return 0;
}
