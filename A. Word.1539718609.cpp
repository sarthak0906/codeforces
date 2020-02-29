#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	char * ptr = &str[0];
	int n = strlen(ptr);
	int big = 0;
	int small = 0;
	for (int i=0;i<n;++i){
		if (int(str[i])<= 90 && int(str[i]) >= 65) big += 1;
		if (int(str[i])<= 122 && int(str[i]) >= 97) small += 1;
	}
	if (big > small){
		for (int i=0;i<n;++i){
			if (int(str[i])<= 122 && int(str[i]) >= 97){
				int a = int(str[i]);
				a -= 32;
				cout << char(a);
			}
			else cout << str[i];
		}
	}
	else {
		for (int i=0;i<n;++i){
			if (int(str[i])<= 90 && int(str[i]) >= 65){
				int a = int(str[i]);
				a +''= 32;
				cout << char(a);
			}
			else cout << str[i];
		}
	}
	
	return 0;
}

