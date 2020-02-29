#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
//	int t;
//	cin >> t;
//	while(t--){
		int n;
		cin >> n;
		int * a = new int[n];
		for (int i=0;i<n;++i) cin >> a[i];
		int m;
		cin >> m;
		map <int,int> arr;
		int max = INT_MIN;
		int * b = new int [m];
		for (int i=0;i<m;++i) {
//			int b;
			cin >> b[i];
		}
		for (int i=0;i<m;++i){
			for (int j=0;j<n;++j){
				if (b[i]%a[j] == 0){
					arr[int(b[i]/a[j])]++;
					if (max < int(b[i]/a[j])) max = int(b[i]/a[j]);
				}
			}
		}
		cout << arr[max] << endl;
//	}
	return 0;
}

