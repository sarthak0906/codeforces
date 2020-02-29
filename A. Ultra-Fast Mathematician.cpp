#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	char * ptr = &str1[0];
	for (int i=0;i<strlen(ptr);++i){
//		cout << i << endl;
		if (str1[i] != str2[i]) cout << '1';
		else cout << '0';
	}
	return 0;
}
