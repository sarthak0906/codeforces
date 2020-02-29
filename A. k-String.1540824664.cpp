#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int k;
	cin >> k;
	string str;
	cin >> str;
	int arr[26] = {0};
	for (int i=0;i<str.length();++i){
		arr[int(str[i])-65] += 1;
	}
	int flag = 0;
	for (int i=0;i<26;++i){
		if (arr[i]%k) flag += 1;
	}
	if (flag) cout << "-1";
	else {
		while (k){
			for (int i=0;i<26;++i){
				for (int j=0;j<arr[i];++j) cout << char(65+i);
			}
			k--;
		}
	}
	return 0;
}
