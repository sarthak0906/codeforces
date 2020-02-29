#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	char * ptr = &str[0];
	int count = 0;
	for (int i=0;i<strlen(ptr);++i){
		if (str[i] == '4' ||str[i] == '7') count ++;
	}
	if (count == 4 || count == 7) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}

