#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	if (n == 1){
		string str;
		cin >> str;
		cout << str;
	}
	else {
		string str;
		string str1;
		int s1 = 0;
		int s2 = 0;
		while (n--){
			if (s1 == s2) {
				cin >> str;
				s1 += 1;
			}
			else {
				cin >> str1;
				if (str1 == str){
					s1 += 1;
				}
				else {
					s2 += 1;
				}
			}
		}
		if (s1 > s2) cout << str;
		else cout << str1;
	}
	return 0;
}

