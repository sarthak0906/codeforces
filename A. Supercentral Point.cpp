#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int * x = new int [n];
	int * y = new int [n];
	for (int i=0;i<n;++i){
		cin >> x[i] >> y[i];
	}
	int count = 0;
	for (int i=0;i<n;++i){
		int up = 0;
		int down = 0;
		int left = 0;
		int right = 0;
		for (int j = 0;j<n;++j){
			if (i == j) continue;
			else {
				if ((x[i] == x[j])&&(y[i] > y[j])) right = 1;
				else if ((x[i] == x[j])&&(y[i] < y[j])) left = 1;
				else if ((y[i] == y[j])&&(x[i] > x[j])) up = 1;
				else if ((y[i] == y[j])&&(x[i] < x[j])) down = 1;
			}
		}
		if (up&&down&&left&&right) count += 1;
	}
	cout << count ;
	
	return 0;
}

