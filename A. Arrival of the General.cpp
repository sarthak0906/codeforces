#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	if (n == 1) {
		int a;
		cin >> a;
		cout << 0 << endl;
	}
	else {
		int max = INT_MIN;
		int min = INT_MAX;
		int mini = 0;
		int maxi = 0;
		for (int i=0;i<n;++i){
			int a;
			cin >> a;
			if (a <= min){
				min = a;
				mini = i;
			}
			if (a > max){
				max = a;
				maxi = i;
			}
		}
		int count ;
		count = maxi;
		count += (n-1-mini);
		if (mini < maxi) count -= 1;
		cout << count << endl;

	}
	return 0;
}

