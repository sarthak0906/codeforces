#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int arr[3][3];
	for (int i=0;i<3;++i){
		for (int j=0;j<3;++j){
			cin >> arr[i][j];
		}
	}
	int a;
	a = arr[0][0] + arr[0][1] + arr[1][0];
	if (a%2) cout << 0;
	else cout << 1;
	a = arr[0][0] + arr[0][1] + arr[0][2] + arr[1][1];
	if (a%2) cout << 0;
	else cout << 1;
	a = arr[0][2] + arr[0][1] + arr[1][2];
	if (a%2) cout << 0 << endl;
	else cout << 1 << endl;
	a = arr[1][0] + arr[0][0] + arr[1][1] + arr[2][0];
	if (a%2) cout << 0;
	else cout << 1;
	a = arr[0][1] + arr[1][0] + arr[1][2] + arr[2][1] + arr[1][1];
	if (a%2) cout << 0;
	else cout << 1;
	a = arr[1][2] + arr[2][2] + arr[0][2] + arr[1][1];
	if (a%2) cout << 0 << endl;
	else cout << 1 << endl;
	a = arr[2][0] + arr[2][1] + arr[1][0];
	if (a%2) cout << 0;
	else cout << 1;
	a = arr[2][1] + arr[2][0] + arr[2][2] + arr[1][1];
	if (a%2) cout << 0;
	else cout << 1;	
	a = arr[1][2] + arr[2][1] + arr[2][2];
	if (a%2) cout << 0 << endl;	
	else cout << 1 << endl;
	return 0;
}
