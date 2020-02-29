#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	if (int(str[0])<= 122 && int(str[0]) >= 97){
		int a = str[0];
		a -= 32;
		str[0] = char(a);
	}
	cout << str;
	return 0;
}

