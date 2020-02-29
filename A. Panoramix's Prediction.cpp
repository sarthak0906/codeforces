#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n , m;
	cin >> n >> m;
	int arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int i = 0;
	for (i=0;i<n;++i){
		if (arr[i] == n) break;
	}
	if (arr[i+1] == m) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}

