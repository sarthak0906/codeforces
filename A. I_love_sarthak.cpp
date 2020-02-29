#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	if (n == 1){
		int a;
		cin >> a;
		cout << 0 << endl;
	}
	else {
		int min = INT_MAX;
		int max = INT_MIN;
		int count = 0;
		int a;
		cin >> a;
		min = a;
		max = a;
		for (int i=1;i<n;++i){
			cin >> a;
			if (a > max) {
				max = a;
				count ++;
			}
			else if (a < min){
				min = a;
				count ++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
