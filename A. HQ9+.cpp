#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	int n = strlen(&str[0]);
	int count = 0;
	for (int i=0;i<n;++i){
		if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
			cout << "YES";
			count++;
			break;
		}
	}
	if (!count) cout << "NO";
	return 0;
}

