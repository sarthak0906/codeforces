#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >>str;
	int arr[26] = {0};
	for (int i = 0;i<str.length();++i)arr[str[i]-'a']++;
	int odd = 0;
	for (int i = 0;i<26;++i){
		if(arr[i]%2) odd++;
	}
	if (odd == 0 || odd % 2 == 1) cout << "First\n";
	else cout << "Second\n";
	return 0;
}
