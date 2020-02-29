#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n,m;
	cin >> n >> m;
	string arr[n];
	for (int i=0;i<n;++i){
//		for (int j=0;j<m;++i){
			cin >> arr[i];
//		}
	}
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++i){
			cout << arr[i][j];
		}
	}
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++i){
			if (arr[i][j] == '.'){
				if (i%2){
					if (j%2){
						cout << "W " ;
					}
					else cout << "B ";
				}
				else {
					if (j%2) cout << "B ";
					else cout << "W ";
				}
			}
	
		}
	}
	return 0;
}

