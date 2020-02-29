#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	string str;
	cin >> str;
	int arr [26] = {0};
	for (int i=0;i<n;++i) arr[int(str[i]) - 97] += 1;
//	int flag = 0;
//	for (int i=0;i<26;++i){
//		if(arr[i] <= n/2) flag ++;
//	}
//	if (flag) {
//		cout << "YES" << endl;
//		for (int i=0;i<n;++i){
//			if (str[i] != str[i+1]) {
//				cout << str[i] << str[i+1];
//				break;
//			}
//		}
//	}//<< str << endl;
	int a = 0;
	for (int i=0;i<n-1;++i){
		if (str[i] != str[i+1]){
			cout << "YES" << endl;
			cout << str[i] << str[i+1];
			a += 1;
			break;
		}
	}
	if (!a) cout << "NO" << endl;
	return 0;
}

