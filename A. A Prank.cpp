#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
	int n;
	cin >> n;
	int * arr = new int [n];
	for (int i=0;i<n;++i) cin >> arr[i];
	int l=0 , g=0;
	for (int i=0;i<n;++i){
		if (i == 0) l =1;
		else l = 0;
		for (int j=i+1;j<n;++j){
			if (arr[j] == arr[j-1] + 1) l++;
			else break;
		}
//		cout << l << endl;
		if (l >= g) g = l;
	}
	cout << g-1 << endl;
}

int main(){
	int t = 1;
//	cin >> t;
	while (t--) solve();
	return 0;
}

