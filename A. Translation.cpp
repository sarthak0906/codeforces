#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	string str1;
	cin >> str;
	cin >> str1;
	char * ptr = &str[0];
	char * ptr1 = &str1[0];
	if (strlen(ptr) != strlen(ptr1)) cout << "NO";
	else {
		bool flag = 0;
		for (int i=0;i<strlen(ptr);++i){
			if (str[i] != str1[str.length()-i-1]){
				flag ++;
				break;
			}
		}
		if (flag == 0) cout << "YES";
		else cout << "NO";
	}
	return 0;
}

