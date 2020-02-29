#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	int n = str.length();
	char ch = str[0];
	cout << "0 ";
	for (int i=1;i<n;++i){
		if (str[i] != ch){
			char temp = ch;
			ch = str[0];
			str[0] = temp;
			cout << "1 ";
		}
		else cout << "0 ";
		ch = str[i];
	}
	return 0;
}

