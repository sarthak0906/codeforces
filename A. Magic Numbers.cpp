#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	char * ptr = &str[0];
	int n = strlen(ptr);
	int flag = 0;
	for (int i=0;i<n;++i){
		if (str[i] == '1'){
			if (str[i+1] == '4'){
				if (str[i+2] == '4'){
					i += 2;
				}
				else if (str[i] == '1') i += 1;
				else {
					flag = 1;
				}
			}
			else if (str[i] == '1') {}
			else {
				flag = 1;
			}
		}
		else flag = 1;
	}
	if (flag == 0) cout << "YES";
	else cout << "NO";
	return 0;
}

